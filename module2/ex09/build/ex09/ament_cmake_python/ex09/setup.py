from setuptools import find_packages
from setuptools import setup

setup(
    name='ex09',
    version='0.0.0',
    packages=find_packages(
        include=('ex09', 'ex09.*')),
)
