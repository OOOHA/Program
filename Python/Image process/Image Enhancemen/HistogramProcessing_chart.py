import numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.cvtColor(cv2.imread('Margot-Robbie-Over_Exposure.jpg'), cv2.COLOR_BGR2RGB)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie-Under_Exposure.jpg'), cv2.COLOR_BGR2RGB)
img3 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

img4 = cv2.cvtColor(cv2.imread('Margot-Robbie-Over_Exposure.jpg'), cv2.COLOR_BGR2GRAY)
img5 = cv2.cvtColor(cv2.imread('Margot-Robbie-Under_Exposure.jpg'), cv2.COLOR_BGR2GRAY)
img6 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2GRAY)

def histogram(img):
    if img.ndim != 3:
        hist = cv2.calcHist([img], [0], None, [256], [0, 256])
    else:
        gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        hist = cv2.calcHist([gray_img], [0], None, [256], [0, 256])

    return hist

hist1 = histogram(img1)
hist3 = histogram(img2)
hist2 = histogram(img3)

hist4 = histogram(img4)
hist5 = histogram(img5)
hist6 = histogram(img6)

titles=['Original(Over_Exposure)', 'Histogram']
plt.figure(figsize = (15, 5))
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img1)
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist1)
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original(Under_Exposure)', 'Histogram']
plt.figure(figsize = (15, 5))
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img2)
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist2)
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original', 'Histogram']
plt.figure(figsize = (15, 5))
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img3)
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist3)
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original-gray(Over Exposure)', 'Histogram']
plt.figure(figsize = (15, 5))
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img4, cmap = 'gray')
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist4)
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original-gray(Under Exposure)', 'Histogram']
plt.figure(figsize = (15, 5))
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img5, cmap = 'gray')
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist5)
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

titles=['Original-gray', 'Histogram']
plt.figure(figsize = (15, 5))
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img6, cmap = 'gray')
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist6)
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

plt.show()