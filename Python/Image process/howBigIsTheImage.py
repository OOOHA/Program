import numpy as np
import cv2
from matplotlib import pyplot as plt

img = cv2.imread("C:/Users/henry/OneDrive/Programs/Program/Python/Image process/img-test.jpg", -1) #remember to replace the \ to / or will get SyntaxError: (unicode error) 'unicodeescape' codec can't decode bytes in position 2-3: truncated \UXXXXXXXX escape
print(img.shape)