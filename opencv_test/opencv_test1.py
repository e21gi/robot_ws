import cv2
import numpy as np

print(cv2.__version__)
image = cv2.imread("image/face.jpeg",cv2.IMREAD_UNCHANGED)
height,width,channel = image.shape
print(height)
print(width)
print(channel)

#반전 변환
image_flip = cv2.flip(image,0)
image_flip2 = cv2.flip(image,0)

#회전
rotate = cv2.getRotationMatrix2D((width/2,height/2),30,1)
image_rotate = cv2.warpAffine(image,rotate,(0,0))

#색
color_gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

cv2.imshow("imageWindow", image)
#cv2.imshow("imageWindow2", image_flip)
#cv2.imshow("imageWindow3", image_flip2)
#cv2.imshow("imageWindow4", image_rotate)
cv2.imshow("imageWindow4", color_gray)
cv2.waitKey(0)
cv2.destroyAllWindows()
