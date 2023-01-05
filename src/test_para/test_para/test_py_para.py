import rclpy
from rclpy.node import Node

class T_param(Node):
  def __init__(self):
    super().__init__("tpara")
    self.declare_parameter("my_para",' 내가만든파라미터') #파라미터 정의
    self.timer = self.create_timer(1,self.para)

  def para(self):
    my_para = self.get_parameter("my_para").get_parameter_value()._string_value #언더바는 외부에서 사용하지 못하도록 하는 변수
    my_para = self.get_parameter("my_para").get_parameter_value().string_value #get으로 가져와서 쓴다.
    self.get_logger().info(f"파라미터를 출력합니다.{my_para}")


def main(args =None):
  rclpy.init()
  node = T_param()
  rclpy.spin(node)
  rclpy.shutdown

if __name__ == '__main__':
  main()
