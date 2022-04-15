from tkinter import Y
import numpy as np
from scipy.signal import convolve2d

x = np.array([[3, 2, 1], [3, 2, 1], [3, 2, 1]])
h = np.array([[1, 1, 1], [1, 2, 1], [1, 1, 1]])
print("x = ", x)
print("h = ", h)

y = convolve2d(x, h, 'same')

print("Convolution y =", y)