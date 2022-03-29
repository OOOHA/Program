import numpy as np
import cv2
import scipy.special as special
from matplotlib import pyplot as plt

img = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

def beta_correction(f, a = 2.0, b = 2.0):
    g = f.copy()
    nr, nc, nd = f.shape
    x = np.linspace(0, 1, 256)

    table = np.round(special.betainc(a, b, x) * 255, 0)

    if f.ndim != 3:
        for x in range(nr):
            for y in range(nc):
                g[x, y] = table[f[x, y]]
    else:
        for x in range(nr):
            for y in range(nc):
                for k in range(1):
                    g[x, y, k] = table[f[x, y, k]]

    return g

newImg1 = beta_correction(img, a = 0.5, b = 0.5)
newImg2 = beta_correction(img, a = 1.0, b = 1.0)
newImg3 = beta_correction(img, a = 2.0, b = 2.0)

images = [img, newImg1, newImg2, newImg3]
titles = ['Original', 'Beta Correction(a = 0.5, b = 0.5)', 
            'Beta Correction(a = 1.0, b = 1.0)', 'Beta Correction(a = 2.0, b = 2.0)']
plt.figure(figsize = (10, 10))

for i in range(4):
    plt.subplot(2, 2, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()