import numpy as np
import cv2
from matplotlib import pyplot as plt


img = np.array([[0, 0, 1, 1, 1, 3, 3], [0, 1, 1, 1, 3, 3, 3], [1, 1, 1, 3, 3, 3, 6],
                    [1, 1, 3, 3, 3, 6, 6], [1, 3, 3, 3, 6, 6, 6], [3, 3, 3, 6, 6, 7, 7], [3, 3, 6, 6, 6, 7, 7]])
img = np.float32(img)

def histogram(img):
    if img.ndim != 3:
        hist = cv2.calcHist([img], [0], None, [256], [0, 256])
    else:
        gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        hist = cv2.calcHist([gray_img], [0], None, [256], [0, 256])

    return hist

hist1 = histogram(img)

x = np.arange(0, 8)
y = np.array([3, 12, 0, 19, 0, 0, 11, 4])
PDF = y / np.sum(y)
CDF = np.cumsum(PDF)

titles=['Original', 'Histogram', 'PDF&CDF', 'Histogram Equalization']
plt.figure(figsize = (15, 5))
plt.subplot(131)
plt.title(titles[0], fontsize = 15, color = 'black')
plt.imshow(img, 'gray')

plt.subplot(132)
plt.title(titles[1], fontsize = 15, color = 'black')
plt.plot(hist1)
plt.xlim([0, 10])
plt.xlabel('Intensity')
plt.ylabel('#Intensities')

plt.subplot(133)
plt.title(titles[2], fontsize = 15, color = 'black')
plt.plot(x, PDF, marker = 'o', label = 'PDF')
plt.plot(x, CDF, marker = 'o', label = 'CDF')
plt.xlim(0, 7)
plt.ylim(0, 1.2)
plt.xlabel("Value")
plt.ylabel("Probability Values")

plt.show()