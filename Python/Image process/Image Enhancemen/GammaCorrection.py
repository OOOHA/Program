import numpy as np
from matplotlib import pyplot as plt
import cv2

img1 = cv2.cvtColor(cv2.imread('Margot-Robbie-gray.jpg'), cv2.COLOR_BGR2RGB)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)


def gamma_correction(f, gamma):
    g = f.copy()
    nr, nc, nd = f.shape
    c = 255 / (255.0 ** gamma)
    table = np.zeros(256)

    for i in range(256):
        table[i] = round(i ** gamma * c, 0)
    
    if f.ndim != 3:
        for x in range(nr):
            for y in range(nc):
                g[x, y] = table[f[x, y]]
    else:
        for x in range(nr):
            for y in range(nc):
                for k in range(3):
                    g[x, y, k] = table[f[x, y, k]]

    return g

newImg1 = gamma_correction(img1, 0.5)
newImg2 = gamma_correction(img1, 0.2)
newImg3 = gamma_correction(img1, 0.1)

images = [img1, newImg1, newImg2, newImg3]
titles = ['Original', 'r = 0.5', 'r = 0.2', 'r = 0.1']
plt.figure(figsize = (10, 10))

for i in range(4):
    plt.subplot(2, 2, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

newImg4 = gamma_correction(img2, 2.0)
newImg5 = gamma_correction(img2, 5.0)
newImg6 = gamma_correction(img2, 10.0)

images = [img2, newImg4, newImg5, newImg6]
titles = ['Original', 'r = 2.0', 'r = 5.0', 'r = 10.0']
plt.figure(figsize = (10, 10))

for i in range(4):
    plt.subplot(2, 2, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()