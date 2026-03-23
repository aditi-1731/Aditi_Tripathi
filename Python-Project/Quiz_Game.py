import random
from datetime import datetime 


easy ={"Capital of India?" : ["Delhi",["Delhi","Mumbai","Chennai","Kolkata"]],"2*2=":["4",["2","4","8","16"]],"The color of sky?":["Blue",["Blue","Green","Red","orange"]]}
medium={"5*7=":["35",["20","78","35","42"]],"Area of circle?":["pi*r*r",["2*pi*R","pi*r*r","r*r","r*r*4"]]}
hard={"Square root of 144?":["12",["13","14","12","15"]],"15*16=":["240",["225","240","235","275"]]}

level_name = {"1": "Easy", "2": "Medium", "3": "Hard"}
print("Previous Scores:")
try:
    with open("scores.txt","r") as file:
        data = file.read()
        if data:
            print(data)
        else:
            print("No previous score yet!")
except:
    print("No previous record found!")
print("-"*30)

print("Select Difficulty Level:")
print("1. Easy")
print("2. Medium")
print("3. Hard")

level=input("Enter your level Choice: ")
if level =='1':
    quiz = easy
elif level=='2':
    quiz = medium
elif level=='3':
    quiz = hard
else: 
    print("Invalid choice! Defaulting to easy level...")
    quiz = easy
    level ='1'

questions = list(quiz.keys())
random.shuffle(questions)

score=0

print(f"\nStarting {level_name.get(level,'Easy')} Quiz...\n")
for i in questions:
    print(i)
    print("-"*30)
    options=quiz[i][1]
    for idx in range(len(options)):
        print(f"{idx+1}. {options[idx]}")
    try:
        choice = int(input("Enter your choice:"))
        print()
        if choice<1 or choice>len(options):
            print("Invalid choice!")
            continue 

        if options[choice-1].lower()==quiz[i][0].lower():
            print("Correct")
            print()
            score+=1
        else:
            print("Incorrect! Correct answer is:",quiz[i][0])
            print() 
    except:
        print("Enter a valid choice!")
        continue

print(f"Your score: {score}/{len(quiz)}")
if score==len(quiz):
    print("Excellent!")
elif score>=len(quiz)//2:
    print("Good Job!")
else:
    print("Better luck next Time!..Keep Practicing")

with open("scores.txt","a") as file:
    file.write(f"{datetime.now()} | Level: {level_name.get(level,'Easy')} | Score: {score}/{len(quiz)}\n")