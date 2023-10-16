from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='time_travel',
            executable='broadcaster',
            name='broadcaster1',
            parameters=[
                {'turtlename': 'turtle1'}
            ]
        ),
        DeclareLaunchArgument(
            'duration', default_value='5.0',
            description='Duration between turtle2 started to follow turtle1.'
        ),
        Node(
            package='time_travel',
            executable='broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
        ),
        Node(
            package='time_travel',
            executable='listener',
            name='listener',
            parameters=[
                {'duration': LaunchConfiguration('duration')}
            ]
        ),
    ])