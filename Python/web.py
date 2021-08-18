from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time


driver = webdriver.Chrome()
driver.get("https://www.youtube.com")
print(driver.title)
# search = driver.find_element_by_name("search_query")
# search.clear()
# search.send_keys("Tesla")
# search.send_keys(Keys.RETURN)

# WebDriverWait(driver, 3).until(
#     EC.presence_of_all_elements_located((By.XPATH,'//*[@id="button"]/paper-ripple'))
# )

# titles = driver.find_elements_by_id("video-title")
# for titles in titles:
#     print(titles.text)

# time.sleep(3)
#driver.quit()