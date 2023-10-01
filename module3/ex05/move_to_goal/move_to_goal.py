import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
from turtlesim.msg import Pose
from math import atan, sqrt
class CommandSubscriber(Node):
    def __init__(self):
        super().__init__('publisher')
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.pose_subscription = self.create_subscription(
            Pose, '/turtle1/pose', self.command_callback, 10)
        self.pose = None

        self.declare_parameter('x', "0")
        self.declare_parameter('y', "0")
        self.declare_parameter('theta', "0")
    
    def command_callback(self, pose):
        if self.pose is None and not self.published:
            self.pose = pose
            return
        
        twist_cmd = Twist()
        args = sys.argv
        if len(args) != 4:
            self.get_logger().info('Three arguments expected: x, y, theta, given ' + str(len(args)) + " arguments")
            return

        x1 = float(self.get_parameter('x').get_parameter_value().string_value)
        y1 = float(self.get_parameter('y').get_parameter_value().string_value)
        theta = float(self.get_parameter('theta').get_parameter_value().string_value)

        x0 = self.pose.x
        y0 = self.pose.y

        alpha = atan((x1-x0)/(y1-y0))
        distance = sqrt((x1-x0)**2 + (y1-y0)**2)

        twist_cmd.angular.x = alpha
        twist_cmd.angular.z = theta
        twist_cmd.linear.x = distance
        self.publisher.publish(twist_cmd)
        return

def main(args=None):
    rclpy.init(args=args)
    command_subscriber = CommandSubscriber()
    rclpy.spin(command_subscriber)
    command_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()