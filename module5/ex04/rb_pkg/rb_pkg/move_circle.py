import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist


class CirclePublisher(Node):

    def __init__(self):
        super().__init__('circle_publisher')
        self.publisher_ = self.create_publisher(Twist, '/robot/cmd_vel', 10)
        timer_period = 0.05 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Twist()
        msg.linear.x = 1.0
        msg.angular.z = 1.0
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    circle_publisher = CirclePublisher()

    rclpy.spin(circle_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    circle_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()