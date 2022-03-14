import numpy as np
from matplotlib import pyplot as plt 

nr, nc = 512, 512

x0 = nr // 2
y0 = nc // 2

illumination = np.zeros([nr,nc], dtype = 'float32')
sigma = 200

for x in range(nr):
    for y in range(nc):
        illumination[x,y] = np.exp(-((x - x0) ** 2 + (y - y0) ** 2) / (2 * sigma * sigma))

print("size:({},{})".format(nc, nc))
print("center:({},{})".format(x0, y0))
print("radius:".format(sigma))
plt.figure(figsize = (5,5))
plt.imshow(illumination, 'gray')
plt.title("Gaussian Function")
plt.show()