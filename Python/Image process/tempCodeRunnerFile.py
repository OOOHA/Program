illumination = np.zeros([nr, nc], dtype = 'float32')

# for x in range(nr):
#     for y in range(nc):
#         illumination[x,y] = np.exp(-((x - x0) ** 2 + (y - y0) ** 2) / (2 * sigma * sigma))

# new_img = img.copy()
# for x in range(nr):
#     for y in range(nc):
#         for z in range(3):
#             val = round(illumination[x,y] * img[x,y])
#             new_img[x,y] = np.uint8(val)

# images = [img, illumination, new_img]
# titles = ['Original', 'Gaussian', 'Image Formation']
# plt.figure(figsize = (15, 15))

# for i in range(3):
#     plt.subplot(1, 3, i + 1), plt.imshow(images[i])
#     plt.title(titles[i])

# plt.tight_layout()
# plt.show()