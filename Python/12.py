
from selenium import webdriver
import time
import os
import wget



driver = webdriver.Chrome()
driver.get("")#input URL
time.sleep(1)
intosite = driver.find_element_by_xpath("/html/body/div[5]/div[2]/div/div[3]/button")
intosite.click()

start = driver.find_element_by_id('slider-start')
start.click()

pause = driver.find_element_by_class_name('pause-slider')
pause.click()


next = driver.find_element_by_xpath('//*[@id="photo_slider"]/div[1]/div[2]/div[2]/div[3]/i')
next.click()
time.sleep(3)#goto 2nd image

############################## start from here (from 2nd image)##############################
##3 images a group
#it will be (123) (456) (789) ect

name = "celebrities"
path = os.path.join("",name)
os.mkdir(name)
count = 1

for i in range(1,200):
    imgs = driver.find_elements_by_css_selector('img.fotorama__img')
    for img2 in imgs:
        save = os.path.join(name, str(count) + ".jpeg")
        wget.download(img2.get_attribute('src'), save)
        count +=1
    
    next.click()
    time.sleep(2)
    next.click()
    time.sleep(2)
    next.click()
    time.sleep(5)