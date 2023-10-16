import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node


def generate_launch_description():
    demo_nodes = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('two_turtles_one_carrot'), 'launch'),
            '/two_turtles.launch.py']),
       launch_arguments={'target_frame': 'carrot1'}.items(),
       )

    return LaunchDescription([
        demo_nodes,
        Node(
            package='two_turtles_one_carrot',
            executable='carrot_broadcaster',
            name='dynamic_broadcaster',
        ),
        DeclareLaunchArgument(
            'radius', default_value='10',
            description='Radius of carrot.'
        ),
        DeclareLaunchArgument(
            'direction_of_rotation', default_value='1',
            description='Direction of rotation of the carrot.'
        ),
    ])