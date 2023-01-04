from setuptools import setup

package_name = 'test_num'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='wongi2170@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mss = test_num.test_service_ser:main',
            'mss1 = test_num.test_service_ser1:main',
            'msc = test_num.test_service_client:main',
            'msm = test_num.test_service_client_minus:main',
            'fas = test_num.fibonacci_action_server:main',
            'fac = test_num.fibonacci_action_client:main'
        ],
    },
)
