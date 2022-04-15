import numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.cvtColor(cv2.imread('Margot-Robbie-Over_Exposure.jpg'), cv2.COLOR_BGR2GRAY)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie-Under_Exposure.jpg'), cv2.COLOR_BGR2GRAY)
img3 = cv2.cvtColor(cv2.imread('Margot-Robbie-Low_Contrast.jpg'), cv2.COLOR_BGR2GRAY)

def histogram(img):
    if img.ndim != 3:
        hist = cv2.calcHist([img], [0], None, [256], [0, 256])
    else:
        gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        hist = cv2.calcHist([gray_img], [0], None, [256], [0, 256])

    return hist

hist1 = histogram(img1)
hist2 = histogram(img2)
hist3 = histogram(img3)

new_Img1 = cv2.equalizeHist(img1)
new_Img2 = cv2.equalizeHist(img2)
new_Img3 = cv2.equalizeHist(img3)

titles=['Original(Over_Exposure)', 'Histogram Equalization']
plt.figure(figsize = (20, 5))
plt.subplot(131)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img1, cmap = 'gray')
plt.subplot(132)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.imshow(new_Img1, cmap = 'gray')
plt.subplot(133)
plt.hist(new_Img1.ravel(), 256, [0, 256])
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original(Under_Exposure)', 'Histogram Equalization']
plt.figure(figsize = (20, 5))
plt.subplot(131)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img2, cmap = 'gray')
plt.subplot(132)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.imshow(new_Img2, cmap = 'gray')
plt.subplot(133)
plt.hist(new_Img2.ravel(), 256, [0, 256])
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original(Low_Contrast)', 'Histogram Equalization']
plt.figure(figsize = (20, 5))
plt.subplot(131)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img3, cmap = 'gray')
plt.subplot(132)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.imshow(new_Img3, cmap = 'gray')
plt.subplot(133)
plt.hist(new_Img3.ravel(), 256, [0, 256])
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

plt.show()