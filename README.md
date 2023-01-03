---
#2023_1_2
---
* 우분투 설치 20.04 버전 vmware 안에 설치..
  * image : https://releases.ubuntu.com/focal/ 데스크탑 버전 설치
  * 터미네이터 설치 : 터미널창에 ~$ sudo apt install terminator 입력

* ROS2 설치 :
  * foxy : ~$ sudo apt install ros-foxy-desktop ros-foxy-rmw-fastrtps* ros-foxy-rmw-cyclonedds*

* testpub testsub으로 ROS2 정상작동 확인.

* turtlesim_node 실행 -> teleop으로 동작 확인
  * rqt 에서 publisher를 이용해 x,y,z축의 크기와 각도를 조정해 거북이를 움직이게 한다.

* 깃허브 사용:
  * push를 통해 깃허브에 업로드해야 안전하다.

* ROS 파이썬 패키지 만들기
  * ~$ ros2 pkg create --build-type ament_python {만들파일이름}
  * message_pubsub 파일을 만들어서 package , setup을 구축
  * class를 만들어서 사용

---
# 2023_1_3
---
* 패키지 pubsub 사용해 pub으로 보내주고 sub로 받기
  * 1. 파일을 cb= 'cd ~/robot_ws && colcon build --symlink-install'를 이용해 빌드하고
  * 2. sb= 'source ~/.bashrc'를 이용해 bashrc를 생성
  * 3. ros2 run {파일이름} {설정한 키워드}를 이용해 pub 또는 sub 실행

* saas 사용
  * google slide를 이용해 공유해 프로젝트를 사용하는 법을 숙지함

* move_turtle
  * from geometry_msgs.msg import Twist 를 import하여 linear 와 angular를 사용해 직접 값을 넣어 거북이를 이동시킨다.
    * 거북이 창은 ros2 run turtlesim turtlesim_node를 이용
  * 한 창에 2번째 3번째 거북이 만들기
    * ros2 service call /spawn turtlesim/srv/Spawn "{x: 5.5 , y: 7.0  , theta: 1.5 , name: 'turtle2'}"
    * 위를 하기 전에 한개의 거북이 창 띄워놓고 사용
    * 거북이를 움직이기 위해서 초기화 부분에 3개의 각기 다른 거북이를 선언하고 거북이가 이동하는 함수 부분에서 publish를 3번 해주면 된다.(코드)
    * 거북이가 지나다니는 선 색을 바꾸기
      * ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r: 100, g: 50, b: 200, width : 5}"
        * turtle1의 선색이 변경, turtle2로 변경하면 turtle2의 색이 변경된다.
    * 삼각함수 사용해 각도 위치 변경 import math 후 math.sin(theta값)으로 이용

*python opencv 설치 : python3 -m pip install opencv-python


* python에서 opencv
  * 반전변환 flip 사용
  * 이동변환 getRotationMatrix2D , warpAffine 사용
  * 색 변환 cvtColor 사용


