import pyautogui as pg
from time import sleep

# sleep(2)
# print(pg.position())

# exit()

for i in range(29,124):
    pg.click(345,142)
    sleep(0.5)
    pg.hotkey("ctrl","a")
    sleep(0.5)
    pg.typewrite(f"Java in one ({i}).jpg",0.06)
    sleep(0.5)
    pg.press("enter")
    sleep(2)

    pg.click(171,259)
    sleep(1)
    pg.moveTo(836,990)

    pg.scroll(-300)
    sleep(0.5)
    pg.click(836,990)
    sleep(0.5)