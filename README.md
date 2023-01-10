---
# 2023_1_2
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

---
# 2023_1_4
---

* 서비스를 이용해 송 수신
  * service는 pcp를 이용하고 request,response 두가지를 이용합니다.

* 인터페이스
  * 1.topic , 2.service, 3.action 이 있는데 지금까지는 만들어진 인터페이스를 사용했다.
  * 내가 만드는 인터페이스
    * 인터페이스는 node와 같이 하나의 패키지로 만들 수 없고 파이썬에서 작동하지 않는다.
    * 그래서 인터페이스 패키지를 따로 만들어야 한다(주의 파일이름을 대문자로 해야한다.)
    * 인터페이스 패키지 명령어 : $ ros2 pkg create --build-type ament_cmake test_interfce
    * 기본 패키지 명령어: $ ros2 pkg create --build-type ament_python test_num

    * 1. 인터페이스 패지기 안에서 msg(자료형 선언) 파일을 만든후 안에 int64 num를 선언해준다
    * 2. srv(서버를 넣을 파일)을 만든후에 내가 이용할 변수들을 선언해준다.
    * 3. cmakelist 안에 rosidl_generate_interfaces(${PROJECT_NAME} "경로")을 추가 해준다.
    * 4. pakage.xml 안에 <buildtool_depend>rosidl_default_generators</buildtool_depend>
                        <depend>geometry_msgs</depend>
                        <exec_depend>rosidl_default_runtime</exec_depend>
                        <member_of_group>rosidl_interface_packages</member_of_group>
                        를 추가해 준다.
    * 5. setup.py의 명령어를 추가해 준다.
    * 6. cb를 이용해 빌드해 준다.
    * 7. 새로운 패키지를 만들어 내가 만든 인터페이스를 임포트 한후 확인한다.
    전반적인 흐름은 코드 test_interface , test_num 참고. 2개의 창을 띄워서 확인해야한다.!

* action 사용해보기
  * 1. test_interface에 action 폴더를 만든후 fibonacci수열의 형식을 입력한다.
  * 2. 기존에 있던 test_num폴더에 client와 server를 만든다. (코드 참고)
  * 3. setup에 설정할 명령어를 입력
  * 4. cd로 빌드후, cs로 bashrc 생성
  * 5. ros2 run {파일이름} {설정한 명령어}


---
# 2023_1_5
---

* 파라미터 사용
  * 파라미터는 다른 노드에서 불러올 수 있다.
  * 형태는 서비스형으로 불러오고 보낸다.

  * turtlesim 파라미터 이용
    * 터틀심 색 확인_블루 : $ ros2 param get /turtlesim background_b
    * 터틀심 색 변경_그린을 255로 : $ ros2 param set /turtlesim background_g 255
    * 변경된 터틀심을 저장하고 위치를 알려줌 : $ ros2 param dump /turtlesim
    * 파일에서 수정한 것을 불러오려면 : $ ros2 run turtlesim turtlesim_node --ros-args --params-file ./turtlesim.

  * launch 사용
    * ros2 run에서 run과 같은 느낌
	  * run은 배울때 launch는 실제로 쓸때
	  * 런치 파일안에는 세팅과, 파라미터값, node정보, share파일이 있다.
	  * lunch 명령어 하나로 많은 node값을 이용할 수 있다.
    * test_py_para.py로 파라미터를 만들어 출력해본다.
    * turtlesim_mimic_launch로 터틀심을 3개를 생성한다.
    * test_para_launch.py를 사용

* turtle bot
  * $ ifconfig : 현재 ip 확인
  * $ sudo apt install nmap : nmap설치
  * $ nmap? : 커맨드 확인
  * $ nmap -sn 192.168.0.0/24(8bit3개여서) : 현재 생성되어있는 IP확인
  * $ ssh ubuntu@192.168.0.{자신에게 할당된번호 ex 22} : pc와 터틀봇 연결

* turtle bot move
  * 1. 연결된 터틀 터미널쪽에서 ros2 launch turtlebot3_bringup robot.launch.py로 bringup 실행
  * 2. 일반 터미널쪽에서 ros2 run turtlebot3_teleop teleop_keyboard를 키고 조정


---
# 2023_1_6
---

* turtlebot launch를 파일로 직접들어가지 않고 밖에서도 사용할 수 있게 설정
  * launch에서 setup파일을 수정해야 한다.
      * os.path 부분을 추가한 것이다(코드 참고)

* turtlebot을 터미널이 아니고 node에서 사용하기
  * 노틸러스에서 other loacaions -> conncet to sever -> sftp://{터틀봇 주소}/ ->연결
  * 연결된 rapa홈의 bashrc를 pc(vsc)로 가져와서 수정 -> pc에 있는 bashrc파일의 rt re rn을  라파로 가져옴

* turtlebot 토픽 설정
  * rt -t 하면 현재 토픽이 나온다.
    * battry state - 배터리 잔량
		* cmd_vel - 터틀 봇 움직임
		* imu - 각가속도 속도
		* joint - 바퀴의 각도 확인
		* odm - 시작위치로 부터 얼마나 떨어져 있나
		* scan-레이저 센서로 각더에서 오는 값을 읽어서 거리 값을 알 수 있음
		* tf- 3차원 공간에서 x,y,z 값 , 지면으로 부터 얼마나 떨어져 있나
      * cmd_vel
        * 노틸러스에서 conncet to seve를 통해 들어가면 turtlebot3_ws/src/turtlebot3_node/src/turtlebot3.cpp 에서 관련 명령어 파일을 볼 수 있다.
        * node관련 패키지를 만들어서 작동 ex) tb3_basic_move.py
        * tb3_basic_move.py 파일 안에서 터틀 봇을 작동시키는 것은 linear.x , angular.z로 작동된다.

* 터틀봇 카메라 세팅
  * 문제가 있어 해결중


---
# 2023_1_9
---
* 저번주 터틀봇 카메라 세팅을 다시 실행
  * 설치:
    1. git clone https://github.com/christianrauch/raspicam2_node.git
    2. sudo apt autoremove --purge libgles2-mesa-dev mesa-common-dev
    3. sudo add-apt-repository ppa:ubuntu-pi-flavour-makers/ppa
    4. sudo apt install libraspberrypi-bin libraspberrypi-dev
    * 4번중 오류 발생 -> sudo apt_get update, upgrade 실행



* turtle bot 네비게이션 and gazebo 시뮬레이션
  * 시뮬 : https://emanual.robotis.com/docs/en/platform/turtlebot3/simulation/#gazebo-simulation
  * 네비게이션 : https://emanual.robotis.com/docs/en/platform/turtlebot3/navigation/#navigation

* turtle bot slam
  * https://emanual.robotis.com/docs/en/platform/turtlebot3/slam/#run-slam-node

* aruco : 로봇서비스의 일종으로 빠른게 장점
  * ar마커 : AR 마커를 이용한 물리적 프로그래밍 정보를 인식하는 방법

* 프로젝트 아이디어 회의 : https://docs.google.com/presentation/d/1_tC2GGcQ1quFyGeajHxiugFS1wR6vpighWsBEbJgPas/edit#slide=id.p

* 프로젝트 공동 github : https://github.com/SSI0816/project-jj

---
# 2023_1_10
---

* turtlebot 카메라 안된부분 해결
  * sudo apt_update하고 github순으로 진행
    -> https://github.com/freshmea?tab=repositories


* gpiov핀(rapa) 확인
  https://fishpoint.tistory.com/6181

* gpio 사용법을 익히고 led와 servo_motor를 이용
  * home -> gpio -> {프로젝트이름}.py를 sudo nano로 만든뒤 사용


