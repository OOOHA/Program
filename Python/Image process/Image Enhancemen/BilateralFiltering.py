import numpy as np
import cv2
from matplotlib import pyplot as plt

img = cv2.cvtColor(cv2.imread('hw6.jpg'), cv2.COLOR_BGR2RGB)

newImg = cv2.bilateralFilter(img, 11, 50, 50)

images = [img, newImg]
titles = ["Original", "Bilateral Filter"]
plt.figure(figsize = (10, 5))
for i in range(2):
    plt.subplot(1, 2, i + 1)
    plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])

plt.tight_layout()
plt.show()