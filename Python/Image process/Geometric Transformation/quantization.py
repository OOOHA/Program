import numpy as np
from matplotlib import pyplot as plt 
import cv2
import time

start = time.time()
img = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

def image_quantization(img, bits):
    nr, nc, nd = img.shape
    retImg = img.copy()
    levels = 2 ** bits
    interval = 256 / levels
    gray_level_interval = 256 / levels
    table = np.zeros(256)

    for k in range(256):
        for l in range(levels):
            if k >= l * interval and l < (l + 1) * interval:
                table[k] = round(l * gray_level_interval)

        for x in range(nr):
            for y in range(nc):
                retImg[x,y] = np.uint8(table[img[x,y]])
    return retImg

img_5bit = image_quantization(img, 5)
img_2bit = image_quantization(img, 2)

images = [img, img_5bit, img_2bit]
titles = ['Original', 'QZ 5bits', 'QZ 2bits']
plt.figure(figsize = (20, 10))
for i in range(3):
    plt.subplot(1, 3, i + 1), plt.imshow(images[i], 'gray')
    plt.title(titles[i], fontsize = 20, color = 'r')

plt.tight_layout()
plt.show()
end = time.time()

print("The execution time is: %f s" %(end-start)) #execution time