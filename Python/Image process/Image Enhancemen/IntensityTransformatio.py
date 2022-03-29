import numpy as np
from matplotlib import pyplot as plt
import cv2

img1 = cv2.imread('Margot-Robbie-gray.jpg', -1)
img2 = cv2.imread('Margot-Robbie.jpg', -1)

def img_negative(f):
    g = 255 - f
    return g

newImg1 = img_negative(img1)
newImg2 = img_negative(img2)

images = [img1, newImg1]
titles = ['Original', 'Image negative']
plt.figure(figsize = (10, 10))

for i in range(2):
    plt.subplot(1, 2, i + 1), plt.imshow(images[i], 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()

images = [img2, newImg2]
titles = ['Original', 'Img negative']
plt.figure(figsize = (10, 10))

for i in range(2):
    plt.subplot(1, 2, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()