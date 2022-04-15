import numpy as np
import cv2
from matplotlib import pyplot as plt

img1 = cv2.cvtColor(cv2.imread('Margot-Robbie-gray.jpg'), cv2.COLOR_BGR2GRAY)
img2 = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

def laplacian(f):
    temp = cv2.Laplacian(f, cv2.CV_32F) + 128
    g = np.uint8(np.clip(temp, 0, 255))
    return g
def composite_laplacian(f):
    kernel = np.array([[0, -1, 0], [-1, 5, -1], [0, -1, 0]])
    temp = cv2.filter2D(f, cv2.CV_32F, kernel)
    g = np.uint8(np.clip(temp, 0, 255))
    return g

newImg1_1 = laplacian(img1)
newImg1_2 = composite_laplacian(img1)

newImg2_1 = laplacian(img2)
newImg2_2 = composite_laplacian(img2)

images = [img1, newImg1_1, newImg1_2]
titles = ["Original", "Laplacian", "Composite Laplacian"]
plt.figure(figsize = (20, 5))
for i in range(3):
    plt.subplot(1, 3, i + 1), plt.imshow(images[i], cmap = 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])

images = [img2, newImg2_1, newImg2_2]
titles = ["Original", "Laplacian", "Composite Laplacian"]
plt.figure(figsize = (20, 5))
for i in range(3):
    plt.subplot(1, 3, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([])

plt.tight_layout()
plt.show()