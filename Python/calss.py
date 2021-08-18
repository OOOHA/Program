from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
import login
#from PIL import Image

driver = webdriver.Safari()
driver.get("https://www.ais.tku.edu.tw/EleCos/login.aspx?ReturnUrl=%2felecos%2f")

ID = driver.find_element_by_name("txtStuNo")
ID.clear()
ID.send_keys(login.studentID)

pas = driver.find_element_by_name("txtPSWD")
pas.clear()
pas.send_keys(login.studentPASS)

#驗證碼
#id = "imgCONFM"
#src="BaseData/confirm.ashx?s=2021081517095366"