import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
import argparse

from action_turtle_commands.action import Message

def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.add_argument('--move', type=str, dest='move_args') 
    parser.add_argument('--angle', type=float, dest='angle_args')
    parser.add_argument('--distance', type=float, dest='distance')
    return parser.parse_args()
    

class TurtleActionClient(Node):

    def __init__(self):
        super().__init__('turtle_action_client')
        self._action_client = ActionClient(self, Message, 'move_turtle')


    def send_goal(self):
    
        goal_msg = Message.Goal()
        args = parse_arguments()

        goal_msg.angle = float(args.angle_args)
        goal_msg.command = args.move_args
        goal_msg.s = float(args.distance)

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg)

        self._send_goal_future.add_done_callback(self.goal_response_callback)


    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.result))
        rclpy.shutdown()


def main(args=None):

    rclpy.init(args=args)

    action_client = TurtleActionClient()

    future = action_client.send_goal()

    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()