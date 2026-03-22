tasks=[]
def show_tasks(tasks):
    if not tasks:
        print("No task available.")
    else:
        for i in range(len(tasks)):
            print(f"{i+1}. {tasks[i]}")
while True:
    print("-------MENU-------")
    print("1.Add task")
    print("2. View task")
    print("3. Remove task")
    print("4. Exit")
    try:
        choice = int(input("Enter your choice: "))
    except:
        print("Enter a valid number.")
        continue
    if choice ==1:
        task = input("Enter your task: ")
        tasks.append(task)
        print("Task added Successfully.")
    elif choice ==2:
        show_tasks(tasks)
    elif choice==3:
        if not tasks:
            print("No task available to be removed.")
        else:
            show_tasks(tasks)
            try:
                num=int(input("Enter your choice to remove task: "))
            except:
                print("Enter a valid choice.")
                continue
            if num>=1 and num<=len(tasks):
                tasks.pop(num-1)
                print("Task removed Successfully.")
            else:
                print("Invalid choice!")
    elif choice==4:
        print("Exited successfully.")
        break 
    else:
        print("invalid Choice!")
