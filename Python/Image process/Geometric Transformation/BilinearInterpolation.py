
import numpy as np
from matplotlib import pyplot as plt
import cv2
import math

img = cv2.cvtColor(cv2.imread('Margot-Robbie.jpg'), cv2.COLOR_BGR2GRAY)

def double_liner(input_signal, zoom_multiples):
    input_row, input_colum = input_signal.shape
    output_row = int(input_row * zoom_multiples)
    output_colum = int(input_colum * zoom_multiples)
    output_signal = np.zeros((output_row, output_colum))

    for i in range(output_row):
        for j in range(output_colum):
            temp_x = i / output_row * input_row
            temp_y = j / output_colum * input_colum

            x1 = int(temp_x)
            y1 = int(temp_y)
            
            x2 = x1
            y2 = y1 + 1

            x3 = x1 + 1
            y3 = y1

            x4 = x1 + 1
            y4 = y1 + 1

            t = temp_x - x1
            u = temp_y - y1

            if x4 >= input_row:
                x4 = input_row - 1
                x2 = x4
                x1 = x4 - 1
                x3 = x4 - 1

            if y4 >= input_colum:
                y4 = input_colum - 1
                y3 = y4
                y1 = y4 - 1
                y2 = y4 - 1

            output_signal[i, j] = (1 - t) * (1 - u) * input_signal[x1, y1] \
                + (1 - t) * u * input_signal[x2, y2] + t * (1 - u) * input_signal[x3, y3] \
                + t * u * input_signal[x4, y4]

    return output_signal

newImg = double_liner(img , 2).astype(np.uint8)
images = [img, newImg]
titles = ['Original', 'Bilinear Interpolation']
plt.figure(figsize = (15, 15))

for i in range(2):
    plt.subplot(1, 2, i + 1), plt.imshow(images[i], 'gray')
    plt.title(titles[i], fontsize = 20, color = 'black')
    #plt.xticks([]), plt.yticks([]) # Do not display x,y

plt.tight_layout()
plt.show()

# print(img)
# print(newImg)