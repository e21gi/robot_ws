from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.substitutions import TextSubstitution
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
import os
from ament_index_python import get_package_share_directory

def generate_launch_description():
  #my_para_de = DeclareLaunchArgument('my_para_launch', default_value=TextSubstitution(text='default_para'))

  #para_node = Node(
    #package='test_para',
    #executable='tp',
    #parameters=[{
      #'my_para': LaunchConfiguration('my_para_launch')
    #}]
    #)

  #파일에서 불러오는 방법


  config = os.path.join(
    #get_package_share_directory("test_para"), "config", "my_para_file.yaml"
  )
  para_node = Node(
    package='test_para',
    executable='tp',
    parameters=[config]
    )

  return LaunchDescription(
      [
        #my_para_de,
        para_node
      ]
    )
