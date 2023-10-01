import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
import argparse

from action_turtle_commands.action import Messageturtlecommands

def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.add_argument('--move', type=int, action='append', dest='move_args') 
    parser.add_argument('--angle', type=int, action='append', dest='angle_args')
    parser.add_argument('--ditance', type=int, action='append', dest='distance')
    return parser.parse_args()

def check_argument(cmd):
    if cmd not in ["turn_left", "turn_right", "move_forward", "move_backward"] or not cmd.isdigit():
        print("Error: command isn't correct")
        return False
    return True
    

class TurtleiActionClient(Node):

    def __init__(self):
        super().__init__('turtle_action_client')
        self._action_client = ActionClient(self, Messageturtlecommands, 'turtle_commands')
        

    def goal_parser(self, command_list=None):
        args = parse_arguments()
        if args.move_args and args.distance:
            if (len(args.move_args)==len(args.distance)):
                for move, distance in zip(args.move_args, args.distance):
                    if check_argument(move) and check_argument(distance):
                        self.send_goal(move=move, angle=0, distance=distance)
            else:
                pass
                
        if args.angle_args:
            for angle in args.angle_args:
                if (check_argument(angle)):
                    self.send_goal(move="stay", angle=angle, distance=0)



    def send_goal(self, move, angle, distance):
    
        goal_msg = Messageturtlecommands.Goal()
        goal_msg.command = move
        goal_msg.angle = angle
        goal_msg.s = distance

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

    action_client = TurtleiActionClient()

    future = action_client.goal_parser()

    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()