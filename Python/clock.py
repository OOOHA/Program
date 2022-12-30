import time
import os

while True:
    current_time = time.strftime("%I:%M:%S %p")
    print(current_time)
    time.sleep(1)
    os.system('clear') # use 'cls' for windows


#24 hour clock
# while True:
#     current_time = time.strftime("%H:%M:%S")
#     print(current_time)
#     time.sleep(1)
#     os.system('clear') # use 'cls' for windows
