import requests
from bs4 import BeautifulSoup
import csv 
import time 

def get_rating(rating_class):
    return rating_class[1]
#budget=float(input("Enter your budget for book:"))
with open("books.csv","w",newline="",encoding="utf-8") as f:
    writer = csv.writer(f)
    writer.writerow(["Title","Price","Rating"])

    page=1

    while True:

        if page==1:
            url = "https://books.toscrape.com/"

        else:
            url = f"https://books.toscrape.com/catalogue/page-{page}.html"

        response = requests.get(url)

        if response.status_code!=200:
            print("Fetching failed..")
            break

        soup = BeautifulSoup(response.text, "html.parser")
        
        books = soup.find_all("article", class_="product_pod")
        print("Books found:", len(books))

        for book in books:
            title = book.h3.a["title"]

            price = book.find("p", class_="price_color").text
            price = float(price.replace("Â£", "").replace("£", ""))

            rating_class = book.find("p", class_="star-rating")["class"]
            rating = get_rating(rating_class)

            
            if price<=100:
                print("Title:", title)
                print("Price:", price)
                print("-"*40)
                writer.writerow([title,price,rating])
        
        next_btn = soup.find("li", class_="next")
        if not next_btn:
            break
        page+=1
        time.sleep(1)