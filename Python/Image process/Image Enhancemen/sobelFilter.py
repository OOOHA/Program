import numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.cvtColor(cv2.imread('Jennifer-lawrence-gray.jpg'), cv2.COLOR_BGR2GRAY)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

def Sobel_gradient(f, direction = 1):
    sobel_x = np.array([[-1, -2, -1], [0, 0, 0], [1, 2, 1]])
    sobel_y = np.array([[-1, 0, 1], [-2, 0, 2], [-1, 0, 1]])

    if direction == 1:
        grad_x = cv2.filter2D(f, cv2.CV_32F, sobel_x)
        gx = abs(grad_x)
        g = np.uint8(np.clip(gx, 0, 255))
    elif direction == 2:
        grad_y = cv2.filter2D(f, cv2.CV_32F, sobel_y)
        gy = abs(grad_y)
        g = np.uint8(np.clip(gy, 0, 255))
    else:
        grad_x = cv2.filter2D(f, cv2.CV_32F, sobel_x)
        grad_y = cv2.filter2D(f, cv2.CV_32F, sobel_y)
        magnitude = abs(grad_x) + abs(grad_y)
        g = np.uint8(np.clip(magnitude, 0, 255))
    return g

gx1 = Sobel_gradient(img1, 1)
gy1 = Sobel_gradient(img1, 2)
g1 = Sobel_gradient(img1, 3)

gx2 = Sobel_gradient(img2, 1)
gy2 = Sobel_gradient(img2, 2)
g2 = Sobel_gradient(img2, 3)

images = [img1, gx1, gy1, g1]
titles = ["Original", "Image Gradient gx", "Image Gradient gy", "Image Gradient |gx|+|gy|"]
plt.figure(figsize = (20, 5))
for i in range(4):
    plt.subplot(2, 2, i + 1), plt.imshow(images[i], cmap = 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])

images = [img2, gx2, gy2, g2]
titles = ["Original", "Image Gradient gx", "Image Gradient gy", "Image Gradient |gx|+|gy|"]
plt.figure(figsize = (20, 5))
for i in range(4):
    plt.subplot(2, 2, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])

plt.tight_layout()
plt.show()