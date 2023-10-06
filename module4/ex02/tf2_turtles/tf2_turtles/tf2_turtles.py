import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from turtlesim.srv import Spawn
from turtlesim.msg import Pose
import tf2_ros
from geometry_msgs.msg import Transform, Quaternion
import geometry_msgs.msg as gm
import math
import numpy as np


def quaternion_from_euler(ai, aj, ak):
    ai /= 2.0
    aj /= 2.0
    ak /= 2.0
    ci = math.cos(ai)
    si = math.sin(ai)
    cj = math.cos(aj)
    sj = math.sin(aj)
    ck = math.cos(ak)
    sk = math.sin(ak)
    cc = ci*ck
    cs = ci*sk
    sc = si*ck
    ss = si*sk

    q = np.empty((4, ))
    q[0] = cj*sc - sj*cs
    q[1] = cj*ss + sj*cc
    q[2] = cj*cs - sj*sc
    q[3] = cj*cc + sj*ss

    return q

class TurtleSimulator(Node):
    def __init__(self):
        super().__init__('turtle_simulator')
        self.radius = 7
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        self.turtle1_frame = tf2_ros.TransformStamped()
        self.turtle1_frame.header.frame_id = 'world'
        self.turtle1_frame.child_frame_id = 'turtle1'

        self.carrot_frame = tf2_ros.TransformStamped()
        self.carrot_frame.header.frame_id = 'turtle1'
        self.carrot_frame.child_frame_id = 'carrot'

        self.turtle2_frame = tf2_ros.TransformStamped()
        self.turtle2_frame.header.frame_id = 'carrot'
        self.turtle2_frame.child_frame_id = 'turtle2'


        self.tf_listener = tf2_ros.TransformListener(node=self, buffer=self.tf_buffer)
        self.turtle_publisher = self.create_publisher(gm.Twist, '/turtle2/cmd_vel', QoSProfile(depth=10))
        self.timer = self.create_timer(0.1, self.follow_carrot)


    def spawn_turtle(self, spawn_client, name, x, y, theta):
        request = Spawn.Request()
        request.name = name
        request.x = x
        request.y = y
        request.theta = theta
        future = spawn_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        if response is not None:
            self.get_logger().info('Spawned '+name+' successfully')
        else:
            self.get_logger().info('Failed to spawn '+name)

    def follow_carrot(self):
        try:
            transform = self.tf_buffer.lookup_transform(
                self.turtle2_frame.child_frame_id, # 'turtle2'
                'carrot',
                rclpy.time.Time())
            
            twist_msg = gm.Twist()
            twist_msg.linear.x = transform.transform.translation.x
            twist_msg.linear.y = transform.transform.translation.y
            twist_msg.linear.z = transform.transform.translation.z

            self.turtle_publisher.publish(twist_msg)
        except Exception as e:
            self.get_logger().error('Error in follow_carrot: %s' % str(e))
        
    def publish_tf_carrot(self):
        self.turtlesim = Pose()
        self.turtlesim.theta += 0.1
        self.carrot_frame.transform.translation.x = self.turtlesim.x + self.radius * math.cos(self.turtlesim.theta)
        self.carrot_frame.transform.translation.y = self.turtlesim.y + self.radius * math.sin(self.turtlesim.theta)
        self.carrot_frame.transform.rotation.w = 1.0

        self.carrot_frame.header.stamp = self.get_clock().now().to_msg()

        self.tf_broadcaster.sendTransform(self.carrot_frame)

        self.get_logger().info('Turtlesim: x=%.2f, y=%.2f. Carrot: x=%.2f, y=%.2f.' %
                               (self.turtlesim.x, self.turtlesim.y,
                                self.carrot_frame.transform.translation.x,
                                self.carrot_frame.transform.translation.y))

    def start_simulation(self):
        spawn_client = self.create_client(Spawn, 'spawn')
        while not spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.spawn_turtle(spawn_client, "turtle1", 2.0, 2.0, 2.0)
        self.spawn_turtle(spawn_client, "turtle2", 8.0, 8.0, 0.0)
        while True:
            self.publish_tf_carrot()

            rclpy.spin_once(self)


def main(args=None):
    rclpy.init(args=args)
    turtle_simulator = TurtleSimulator()
    turtle_simulator.start_simulation()
    rclpy.shutdown()
if __name__ == '__main__':
    main()
