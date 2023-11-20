import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

class ObstacleAvoidance(Node):

    def __init__(self):
        super().__init__('obstacle_avoidance')
        self.publisher = self.create_publisher(Twist, '/robot/cmd_vel', 10)
        self.subscription = self.create_subscription(
            LaserScan, '/robot/scan', self.laser_callback, 10)
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.is_obstacle = False

    def laser_callback(self, msg):
        ranges = msg.ranges
        center_index = len(ranges) // 2
        center_distance = ranges[center_index]

        self.get_logger().info(f"Center distance: {center_distance}")

        # Check if there is an obstacle within a certain distance
        self.is_obstacle = center_distance < 3.0

    def timer_callback(self):
        twist = Twist()

        if self.is_obstacle:
            twist.linear.x = 0.0
        else:
            twist.linear.x = -1.0

        self.publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    obstacle_avoidance = ObstacleAvoidance()
    rclpy.spin(obstacle_avoidance)
    obstacle_avoidance.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()