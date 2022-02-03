"""Ask and remember a user's name and say hello

Note: this depends on the name of your python executable, this example assumes GNU/Linux python3

Run as:

python3 interactive.py
"""

names = []
running = True

while running:
    value = input("Your name: ")

    if value == "exit":
        running = False
        print("Bye!")
    elif value in names:
        print(f"Hello {value}, we have met before :)")
    else:
        names.append(value)
        print(f"Hi {value}!")
