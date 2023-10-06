import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
from turtlesim.msg import Pose
from math import atan, sqrt, fabs
import argparse

def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.add_argument('--x', type=float, dest='x') 
    parser.add_argument('--y', type=float, dest='y')
    parser.add_argument('--theta', type=float, dest='theta')
    return parser.parse_args()

class CommandSubscriber(Node):
    def __init__(self):
        super().__init__('publisher')
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.pose_subscription = self.create_subscription(
            Pose, '/turtle1/pose', self.command_callback, 10)
        self.pose = None

    def command_callback(self, pose):
        if self.pose is None:
            self.pose = pose
        
        twist_cmd = Twist()
        eps = 1e-1

        args = parse_arguments()

        theta = args.theta
        x1 = args.x
        y1 = args.y

        x0 = self.pose.x
        y0 = self.pose.y

        alpha = atan((x1-x0)/(y1-y0))
        distance = sqrt((x1-x0)**2 + (y1-y0)**2)

        twist_cmd.angular.x = alpha
        twist_cmd.angular.z = theta
        twist_cmd.linear.x = distance
        print(x0, x1, y0, y1)
        if fabs(x1-x0)>eps or fabs(y1-y0)>eps:
            self.publisher.publish(twist_cmd)


def main(args=None):
    rclpy.init(args=args)
    command_subscriber = CommandSubscriber()
    rclpy.spin(command_subscriber)
    command_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()