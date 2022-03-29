import numpy as np
import cv2
from matplotlib import pyplot as plt
import math

img = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2RGB)

scale = eval(input("Please enter scale:"))
nr, nc = img.shape[:2]
nr2 = int(nr * scale)
nc2 = int(nc * scale)

new_img = cv2.resize(img, (nr2, nc2), interpolation = cv2.INTER_LINEAR)
images = [img, new_img]
titles = ['Original', 'Rescaling' + str(scale)]
plt.figure(figsize = (10, 10))

for i in range(2):
    plt.subplot(1, 2, i + 1), plt.imshow(images[i])
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()