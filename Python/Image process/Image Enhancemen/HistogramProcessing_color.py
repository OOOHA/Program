import plistlib
import numpy as np
import cv2
from matplotlib import pyplot as plt

img = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

r, g, b = cv2.split(img)
print(r, g, b)

plt.hist(r.ravel(), bins = 256, density = 1, facecolor = 'r', edgecolor = 'r', alpha = 0.75)
plt.hist(g.ravel(), bins = 256, density = 1, facecolor = 'g', edgecolor = 'g', alpha = 0.75)
plt.hist(b.ravel(), bins = 256, density = 1, facecolor = 'b', edgecolor = 'b', alpha = 0.75)

plt.xlim([0, 256])
plt.xlabel('Intensity')
plt.ylabel('#Intensity')
plt.show()