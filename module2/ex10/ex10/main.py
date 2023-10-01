import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String

class CommandSubscriber(Node):
    def __init__(self):
        super().__init__('command_subscriber')
        self.subscription = self.create_subscription(
            String,
            'cmd_text',
            self.command_callback,
            10
        )
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
    def command_callback(self, msg):
        command = msg.data
        twist_cmd = Twist()
        if command == 'forward':
            twist_cmd.linear.x = 1.0
        elif command == 'backward':
            twist_cmd.linear.x = -1.0
        elif command == 'left':
            twist_cmd.angular.z = 1.0
        elif command == 'right':
            twist_cmd.angular.z = -1.0
        self.publisher.publish(twist_cmd)

def main(args=None):
    rclpy.init(args=args)
    command_subscriber = CommandSubscriber()
    rclpy.spin(command_subscriber)
    command_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()