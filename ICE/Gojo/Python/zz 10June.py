# pip install bs4 ------> cmd 

from bs4 import BeautifulSoup
import requests

url = "https://moviesmod.life/"
a = requests.get(url)

soup = BeautifulSoup(a.text, 'html.parser')

data = soup.findAll("h2",class_="title front-view-title")

# print movie name
for i in data:
    print(i.text)

# # print links 
for i in data:
    p = i.find("a")
    print(p["href"])