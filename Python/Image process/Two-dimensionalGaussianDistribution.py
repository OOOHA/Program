import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.axes3d import Axes3D

def g(v, std):
    x = v[0]
    y = v[1]

    return np.exp(-((x ** 2) + (y ** 2)) / (2 * std ** 2))

x = np.linspace(-25, 25, 241)
xy = np.meshgrid(x, x)

plt.figure(figsize = (8, 8))
ax1 = plt.subplot2grid((1, 1), (0, 0), projection = '3d')
ax1.plot_surface(xy[0], xy[1], g(xy, 11), color = 'skyblue')
plt.show()
k = g(xy, 11)[::60, ::60]
print(k, k.shape)