from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_arm_remote',
    version='0.0.0',
    packages=find_packages(
        include=('robot_arm_remote', 'robot_arm_remote.*')),
)
