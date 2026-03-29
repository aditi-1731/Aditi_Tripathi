import requests
import csv
from bs4 import BeautifulSoup

keyword= input("Enter job Keyword to search:").lower()
with open ("jobsearch.csv","w",newline="",encoding="utf-8") as f:
    writer = csv.writer(f)
    writer.writerow(["Title","Company","Location","Link"])

    url = "https://realpython.github.io/fake-jobs/"
    response = requests.get(url)
    if response.status_code==200:
        soup = BeautifulSoup(response.text, "html.parser")
    else:
        print("failed to search jobs...")
        exit()
    jobs = soup.find_all("div", class_="card-content")
    result = False
    for job in jobs:
        title = job.find("h2").text.strip()
        company = job.find("h3").text.strip()
        location = job.find("p").text.strip()
        a_tag = job.find("a")
        link = a_tag["href"] if a_tag else "Not Available.."
        if keyword in title.lower():
            result = True
            print("Title:",title)
            print("Company:",company)
            print("Location:",location)
            print("Link:",link)
            print("-"*40)
            writer.writerow([title,company,location,link])
    if not result:
        print("No jobs found with given keyword..")
        
    