import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String #다른 string과는 다름
from rclpy.qos import QoSProfile #qos 네임을 사용자가 지정할수 있도록 선언


class Tb3_m_pub(Node):
  def __init__(self):
    super().__init__('tb3_move') #message_publisher에 노드명 정의
    self.qos_profile = QoSProfile(depth = 10) #qos 네임을 사용자가 지정
    self.tb3_m_publish = self.create_publisher(Twist,"cmd_vel",self.qos_profile) #create_publisher를 이용
    self.timer = self.create_timer(0.1,self.tb3_m_publisher) #토픽 발행
    self.count = 0

  def tb3_m_publisher(self):
    msg = Twist()
    msg.linear.x = 1.0
    msg.angular.z = 1.0
    self.tb3_m_publish.publish(msg)
    self.get_logger().info(f"published mesage: {msg.linear.x},{msg.angular.z}")
    self.count += 1


def main(args = None): #메인은 거의 변하지 않는다... 거의 이대로 고정
  rclpy.init(args = args)
  node = Tb3_m_pub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt: # 종료할때 대부분 사용
    node.get_logger().info("Keyboard interrupt")
  node.destroy_node()
  rclpy.shutdown()
