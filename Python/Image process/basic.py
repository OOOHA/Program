from cmath import e
import numpy as np
import math

import cv2

#1
pi = math.pi #Create pi by using this line
print(np.log(pow(e, 2)))
print(np.log2(1024))
print(np.sin(pi / 6))
print(np.cos(pi))
print(np.arcsin(1))
print(np.arccos(1 / 2))

#2
row = np.array([(i/2, i/2, i/2) for i in range(512)], dtype="uint8") #set the image
img = np.repeat(np.array([row], dtype="uint8"), 100, axis=0) #generate the image

#cv2.imwrite('color_img.jpg', img) #save image
cv2.imshow("image", img) #show image
cv2.waitKey() #stop the Window
cv2.destroyAllWindows() #kill the Window

#3
chess_size = 512 #set size 512*512
unit = int(chess_size / 8)
chess_shape = (chess_size,chess_size)

chess = np.ones((chess_shape),dtype=np.uint8)
print(chess.shape)

for i in range(8):
    for j in range(8):
        if i % 2 == 0:
            if j % 2 == 0: #check for black or white of the first cell of every row
                chess[i*unit:(i+1)*unit,j*unit:(j+1)*unit] = 0
            elif j % 2 == 1: #check if it's the first cell
                chess[i*unit:(i+1)*unit,j*unit:(j+1)*unit] = 255
        elif i % 2 == 1:#check if it's the first cell
            if j % 2 == 0:
                chess[i*unit:(i+1)*unit,j*unit:(j+1)*unit] = 255
            elif j % 2 == 1:
                chess[i*unit:(i+1)*unit,j*unit:(j+1)*unit] = 0

#cv2.imwrite('chess.png',chess) #save image
cv2.imshow('chess',chess) #show image
cv2.waitKey() #stop the Window
cv2.destroyAllWindows() #kill the Window