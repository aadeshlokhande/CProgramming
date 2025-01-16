import pyautogui as pg 
from time import sleep


# print(pg.position())

# exit()
sleep(1)

file = open("R Content.txt", "r")
for i in range(41):
    pg.click(1082,-73)

    line= file.readline()
    if("=<:>=<:>=<:>=<:>=<:>" not in line):
        pg.typewrite(line, 0.1)
        sleep(1)
        pg.press("enter")
    sleep(8)













# I want information and I'll provide you with topics one by one you have to generate information easily and simply for beginners Also, remember not to create information like an AI. I want information in bookish language. so are you ready