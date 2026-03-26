import requests
from bs4 import BeautifulSoup
import time
import csv 

with open("quotes.csv","w",newline="",encoding="utf-8") as f:
    writer = csv.writer(f)
    writer.writerow(["Quote","Author"])
    page = 1
    while True:
        url = f"http://quotes.toscrape.com/page/{page}/"
        response=requests.get(url)
        if response.status_code==200:
            soup=BeautifulSoup(response.text,"html.parser")
        else:
            print("Failed to fetch website..")
            exit()
        quotes= soup.find_all("div",class_="quote")
        if not quotes:
            break
        for q in quotes:
            text = q.find("span",class_="text").text
            author = q.find("small",class_="author").text

            print("Quote: ",text)
            print("Author: ",author)

            writer.writerow([text,author])
        page+=1
        time.sleep(1)
    