import rclpy
from rclpy.node import Node
from std_msgs.msg import Header #다른 string과는 다름
from rclpy.qos import QoSProfile #qos 네임을 사용자가 지정할수 있도록 선언

class M_Pub(Node):
  def __init__(self):
    super().__init__('time_publisher') #message_publisher에 노드명 정의
    self.qos_profile = QoSProfile(depth = 10) #qos 네임을 사용자가 지정
    self.message_publisher = self.create_publisher(Header,"time",self.qos_profile) #create_publisher를 이용
    self.timer = self.create_timer(0.01,self.t_publisher) #토픽 발행

  def t_publisher(self):
    msg = Header()
    msg.stamp = self.get_clock().now().to_msg() #현재의 시간이 찍힘
    self.message_publisher.publish(msg) #publisher 실행라인
    self.get_logger().info(f"published time mesage: {msg.stamp}")
    self.get_logger().info(f"published time mesage: {self.get_clock().now().seconds_nanoseconds()}")


def main(args = None): #메인은 거의 변하지 않는다... 거의 이대로 고정
  rclpy.init(args = args)
  node = M_Pub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt: # 종료할때 대부분 사용
    node.get_logger().info("Keyboard interrupt")
  node.destroy_node()
  rclpy.shutdown()
