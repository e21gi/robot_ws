import rclpy
from rclpy.node import Node
from std_msgs.msg import String #다른 string과는 다름
from rclpy.qos import QoSProfile #qos 네임을 사용자가 지정할수 있도록 선언

class M_time(Node):
  def __init__(self):
    super().__init__('time_publisher') #message_publisher에 노드명 정의
    self.qos_profile = QoSProfile(depth = 10) #qos 네임을 사용자가 지정
    self.message_publisher = self.create_publisher(String,"massage_time",self.qos_profile) #create_publisher를 이용
    self.timer = self.create_timer(1,self.t_publisher) #토픽 발행
    self.count = 0

  def t_publisher(self):
    msg1 = String()
    msg1.data = f"time:{self.count}"
    self.message_publisher.publish(msg1)
    self.get_logger().info(f"published time mesage: {msg1.data}")
    self.count += 1


def main(args = None): #메인은 거의 변하지 않는다... 거의 이대로 고정
  rclpy.init(args = args)
  node = M_time()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt: # 종료할때 대부분 사용
    node.get_logger().info("Keyboard interrupt")
  node.destroy_node()
  rclpy.shutdown()


if __name__ == "__main": #main 상태에서만 실행
  main()
