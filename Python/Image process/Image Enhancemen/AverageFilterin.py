import numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.cvtColor(cv2.imread('Jennifer-lawrence-gray.jpg'), cv2.COLOR_BGR2GRAY)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)


newImg1 = cv2.blur(img1, (5, 5))
newImg2 = cv2.blur(img1, (11, 11))
newImg3 = cv2.blur(img1, (21, 21))

newImg4 = cv2.blur(img2, (5, 5))
newImg5 = cv2.blur(img2, (11, 11))
newImg6 = cv2.blur(img2, (21, 21))

images = [img1, newImg1, newImg2, newImg3]
titles = ["Original", "5 x 5", "11 x 11", "21 x 21"]
plt.figure(figsize = (20, 5))
for i in range(4):
    plt.subplot(1, 4, i + 1), plt.imshow(images[i], cmap = 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])
plt.tight_layout()
plt.show()

images = [img2, newImg4, newImg5, newImg6]
titles = ["Original", "5 x 5", "11 x 11", "21 x 21"]
plt.figure(figsize = (20, 5))
for i in range(4):
    plt.subplot(1, 4, i + 1), plt.imshow(images[i], cmap = 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])
plt.tight_layout()
plt.show()