from setuptools import find_packages
from setuptools import setup

setup(
    name='roar_gokart_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('roar_gokart_msgs', 'roar_gokart_msgs.*')),
)
