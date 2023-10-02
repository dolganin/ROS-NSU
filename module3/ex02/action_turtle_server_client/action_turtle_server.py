import math

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from geometry_msgs.msg import Twist
from action_turtle_commands.action import Message

distance_counter = 0

dict_linear_x = {'move_forward': 1, 'move_backward': -1}
dict_linear_y = {'turn_left': 1, 'turn_right': -1}

class TurtleActionServer(Node):

    def __init__(self):
        super().__init__('turtle_commands_action_server')
        self._action_server = ActionServer(
            self,
            Message,
            'move_turtle',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')


        feedback_msg = Message.Feedback()

        twist_cmd = Twist()
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        twist_cmd.angular.z = float(goal_handle.request.angle)

        if goal_handle.request.command in ["move_forward", "move_backward"]:
            twist_cmd.linear.x = float(dict_linear_x[goal_handle.request.command]*goal_handle.request.s)
        elif goal_handle.request.command in ["turn_right", "turn_left"]:
            twist_cmd.linear.y = float(dict_linear_y[goal_handle.request.command]*goal_handle.request.s)

        global distance_counter 
        distance_counter += math.sqrt(twist_cmd.linear.x**2+twist_cmd.linear.y**2)
        feedback_msg.odom = float(distance_counter)

        self.publisher.publish(twist_cmd)

        self.get_logger().info('Feedback: {0}'.format(feedback_msg.odom))
        goal_handle.publish_feedback(feedback_msg)
        goal_handle.succeed()

        result = Message.Result()

        result.result = True

        return result


def main(args=None):
    rclpy.init(args=args)

    turtle_commands_action_server = TurtleActionServer()

    rclpy.spin(turtle_commands_action_server)


if __name__ == '__main__':
    main()