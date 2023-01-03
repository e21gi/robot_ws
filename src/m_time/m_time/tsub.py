import rclpy
from rclpy.node import Node
from std_msgs.msg import String #다른 string과는 다름
from rclpy.qos import QoSProfile

class M_sub(Node):
  def __init__(self):
    super().__init__('message_subscriber') #message_publisher에 노드명 정의
    self.qos_profile = QoSProfile(depth = 10) #qos 네임을 사용자가 지정
    self.message_subscriber = self.create_subscription(String,"massage_pub",self.subscriber_massage,self.qos_profile) #create_subscription을 이용
    self.message_subscriber_time = self.create_subscription(String,"massage_time",self.subscriber_massage_test,self.qos_profile) #create_subscription을 이용

  def subscriber_massage(self,msg1):
    self.get_logger().info(f"sub_pub:{msg1.data}")

  def subscriber_massage_test(self,msg2):
    self.get_logger().info(f"sub_time:{msg2.data}")

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
