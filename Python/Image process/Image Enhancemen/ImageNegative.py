import numpy as np
from matplotlib import pyplot as plt
import cv2
import time

img1 = cv2.cvtColor(cv2.imread('Margot-Robbie-gray.jpg'), cv2.COLOR_BGR2RGB)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

def image_negative(f):
    g = 255 - f
    return g

newImg1 = image_negative(img1)
newImg2 = image_negative(img2)

images = [img1, newImg1]
titles = ['Original', 'Image Negative']
plt.figure(figsize = (10, 5))
for i in range(2):
    plt.subplot(1, 3, i + 1), plt.imshow(images[i], 'gray')
    plt.title(titles[i], fontsize = 20, color = 'r')
    plt.xticks([]), plt.yticks([]) # Do not display x,y

images = [img2, newImg2]
titles = ['Original', 'Image Negative']
plt.figure(figsize = (10, 5))
for i in range(2):
    plt.subplot(1, 3, i + 1), plt.imshow(images[i], 'gray')
    plt.title(titles[i], fontsize = 20, color = 'r')
    plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()