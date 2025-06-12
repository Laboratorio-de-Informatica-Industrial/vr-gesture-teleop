from setuptools import find_packages
from setuptools import setup

setup(
    name='file_server2',
    version='1.0.0',
    packages=find_packages(
        include=('file_server2', 'file_server2.*')),
)
