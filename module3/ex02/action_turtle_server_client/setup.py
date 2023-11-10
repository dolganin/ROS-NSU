from setuptools import find_packages, setup

package_name = 'action_turtle_server_client'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dolganin',
    maintainer_email='8yp3r10@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'client=action_turtle_server_client.action_turtle_client:main',
        'server=action_turtle_server_client.action_turtle_server:main'
        ],
    },
)
