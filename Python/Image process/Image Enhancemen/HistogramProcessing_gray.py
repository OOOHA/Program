import numpy as np
import cv2
from matplotlib import pyplot as plt

img = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2GRAY)

titles = ['Original', 'Histogram']
plt.subplot(121)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img, cmap = 'gray')
plt.subplot(122)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.hist(img.ravel(), 256, [0, 256])
plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')
plt.show()