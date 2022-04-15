import numpy as np


x = np.array([1, 2, 3, 3, 1, 1, 1])
h = np.array([1, 2, 2, -1, 1])
y = np.convolve(x, h, 'full')
y1 = np.convolve(x, h, 'same')

print("x = ", x)
print("x = ", h)

print("Full Convolve y = ", y)
print("Convolution y = ", y1)