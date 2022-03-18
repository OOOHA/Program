
import numpy as np
from matplotlib import pyplot as plt
import cv2
import math

img = cv2.imread('Margot-Robbie.jpg')

def nearestinterpolation(img, scale):
    srcH, srcW, srcD = img.shape
    dstH, dstW= srcH * scale, srcW * scale
    retImg = np.zeros([dstH, dstW, srcD], dtype = 'uint8')

    for i in range(dstH):
        srcX = round((i) * (srcH / dstH))

        for j in range(dstW):
            srcY = round((j) * (srcW / dstW))

            if srcX >= srcH:
                srcX = srcH - 1 
                
            if srcY >= srcW:
                srcY = srcW - 1

            retImg[i, j, :] = img[srcX, srcY, :]

    return retImg

enlarge = int(input('Enter enlarge scale:'))
newImg = nearestinterpolation(img, enlarge)
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