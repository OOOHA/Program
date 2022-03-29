import numpy as np
import cv2
import scipy.special as special
from matplotlib import pyplot as plt

x = np.linspace(0, 1, 256)

for(a, b) in [(0.5, 0.5), (1.0, 1.0), (2.0, 2.0)]:
    table = np.round(special.betainc(a, b, x) * 256, 0)

    plt.plot(table, label = "a = {}, b = {}".format(a, b))

plt.xlabel("Input Image Intensity")
plt.ylabel("Output Image Intensity")
plt.legend(loc = "upper left", frameon = True)
plt.title("Incomplete Beta Function")
plt.show()