import rclpy
from rclpy.node import Node
from std_msgs.msg import String #다른 string과는 다름
from std_msgs.msg import Header #시간 관련
from rclpy.qos import QoSProfile

class M_sub(Node):
  def __init__(self):
    super().__init__('message_subscriber') #message_publisher에 노드명 정의
    self.qos_profile = QoSProfile(depth = 10) #qos 네임을 사용자가 지정
    self.message_subscriber = self.create_subscription(String,"massage",self.subscriber_massage,self.qos_profile) #create_subscription을 이용
    self.message_subscriber = self.create_subscription(Header,"time",self.subscriber_massage_time,self.qos_profile)

  def subscriber_massage(self,msg):
    self.get_logger().info(f"published mesage:{msg.data}")

  def subscriber_massage_time(self,msg):
    self.get_logger().info(f"published mesage:{msg.stamp}")

def main(args = None): #메인은 거의 변하지 않는다... 거의 이대로 고정
  rclpy.init(args = args)
  node = M_sub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt: # 종료할때 대부분 사용
    node.get_logger().info("Keyboard interrupt")
  node.destroy_node()
  rclpy.shutdown()

if __name__ == '__main__':
  main()


