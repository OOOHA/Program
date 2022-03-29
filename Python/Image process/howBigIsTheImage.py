import numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.imread("Margot-Robbie.jpg", 0) #remember to replace the \ to / or will get SyntaxError: (unicode error) 'unicodeescape' codec can't decode bytes in position 2-3: truncated \UXXXXXXXX escape
img2 = cv2.imread("jennifer-lawrence.jpg", -1)
img3 = cv2.imread("jennifer-lawrence-gray.jpg", 0)
img4 = cv2.imread("Lenna.bmp", -1)

img5 = cv2.imread("Margot-Robbie.jpg", -1)
img6 = cv2.imread("Margot-Robbie.jpg", 1)
img7 = cv2.imread("Margot-Robbie.jpg", 2)
img8 = cv2.imread("Margot-Robbie.jpg", 3)

print("1", img1.shape)
print("2", img2.shape)
print("3", img3.shape)
print("4", img4.shape)
print("5", img5.shape)
print("6", img6.shape)
print("7", img7.shape)
print("8", img8.shape)

img_gray = cv2.imread("Margot-Robbie.jpg", cv2.IMREAD_GRAYSCALE)
# cv2.imshow('gray',img_gray) #show image
# cv2.waitKey() #stop the Window
# cv2.destroyAllWindows() #kill the Window
# #cv2.imwrite('Margot-Robbie-gray.jpg',img_gray)
print(img_gray.shape)