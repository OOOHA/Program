
import numpy as np
from matplotlib import pyplot as plt
import cv2
import math

img = cv2.imread('C:/Users/henry/OneDrive/Programs/Program/Python/Image process/jennifer-lawrence-gray.jpg', 0)

def nearestinterpolation(img, scale):
    srcH, srcW = img.shape
    dstH, dstW = srcH * scale, srcW * scale
    retImg = np.zeros([dstH, dstW], dtype = 'uint8')

    for i in range(dstH):
        for j in range(dstW):
            srcX = round((i) * (srcH / dstH))
            srcY = round((j) * (srcW / dstW))

            if srcX >= srcW:
                srcX = srcW - 1
                
            if srcY >= srcH:
                srcY = srcH - 1

            retImg[i, j] = img[srcX, srcY]

    return retImg

newImg = nearestinterpolation(img, 3)
print(img.shape)
print(img)
print(newImg.shape)
print(newImg)

images = [img, newImg]
titles = ['Original', 'nearest Interpolation']
plt.figure(figsize = (15, 15))

for i in range(2):
    plt.subplot(1, 2, i + 1), plt.imshow(images[i], 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()