from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
import login
#from PIL import Image

driver = webdriver.Chrome('/Users/macminim1/Downloads/chromedriver')#chromedriver path
driver.get("https://www.ais.tku.edu.tw/EleCos/login.aspx?ReturnUrl=%2felecos%2f")

stuID = driver.find_element(By.NAME("txtStuNo"))
stuID.clear()
stuID.send_keys(login.studentID)

pas = driver.find_element(By.NAME("txtPSWD"))
pas.clear()
pas.send_keys(login.studentPASS)
time.sleep(500)

#驗證碼
#id = "imgCONFM"
#src="BaseData/confirm.ashx?s=2021081517095366"

code = driver.find_element(By.NAME("txtCosEleSeq"))
code.clear()
code.send_keys("1014")

add = driver.find_element(By.NAME("btnAdd"))
add.click()