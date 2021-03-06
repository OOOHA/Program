import numpy as np
from matplotlib import pyplot as plt 
import cv2

img = cv2.imread("C:/Users/henry/OneDrive/Programs/Program/Python/Image process/jennifer-lawrence-gray.jpg", -1)
#img = cv2.imread("/Users/henry/OneDrive/Programs/Program/Python/Image process/jennifer-lawrence-gray.jpg", 0) # For my mac

nr, nc = img.shape[:2]
x0 = nr // 2
y0 = nc // 2
sigma = 200

illumination = np.zeros([nr, nc], dtype = 'float32')

for x in range(nr):
    for y in range(nc):
        illumination[x,y] = np.exp(-((x - x0) ** 2 + (y - y0) ** 2) / (2 * sigma * sigma))

new_img = img.copy()
for x in range(nr):
    for y in range(nc):
        for z in range(3):
            val = round(illumination[x,y] * img[x,y,z])
            new_img[x,y,z] = np.uint8(val)

images = [img, illumination, new_img]
titles = ['Original', 'Gaussian', 'Image Formation']
plt.figure(figsize = (15, 15))

for i in range(3):
    plt.subplot(1, 3, i + 1), plt.imshow(images[i])
    plt.title(titles[i])

plt.tight_layout()
plt.show()