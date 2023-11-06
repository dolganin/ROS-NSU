from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'rb_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'urdf'), ['urdf/robot.urdf.xacro', 'urdf/gazebo.urdf.xacro']),
        (os.path.join('share', package_name, 'config'), ['config/diff_drive.rviz', 'config/robot_bridge.yaml'])

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pritor',
    maintainer_email='petya.podstavkin@mail.ru',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'move_circle=rb_pkg.move_circle:main'
        ],
    },
)
