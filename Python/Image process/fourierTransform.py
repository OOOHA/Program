import numpy as np
from numpy.fft import fft, ifft
from matplotlib import pyplot as plt

x = np.array([1, 1, 4, 2])
y = fft(x)
print("x = ", x)
print("FFT of x = ", y)

dft_x = np.fft.fft(x, 16)
plt.plot(dft_x)
plt.ylabel("FFT")
plt.show()