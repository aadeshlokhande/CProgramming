import pyautogui as pg
import time 
time.sleep(3)
for i in range(1,11):
    pg.typewrite("hello <3",0.08)
    pg.press("enter")
    time.sleep(0.5)