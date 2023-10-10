import random # to addd random number generation
number1 = float(input("Enter the first number: ")) # inputs the first number
OperationSym = input("Enter the operation (+, -, *, /): ") # inputs operation
number2 = float(input("Enter the second number: ")) # input the second number
DivB0Lore = ("Collapse of the universe is imminent", "So you have chosen mass eradication", "Destruction is of your making", "Todd Howard reigns supreme", "Pineaple pizzas have tripled", "All red pills are gone, only blue remain", "Chicken Nuggies were removed from existance", "Earth Plague Inc. speedrun has begun", "*Cheats Enabled*", "Alternate realities with puppies collapsed") #list with string vars #
DoomLoop = 0 #int var
printResult = True #bool var

def Imminent(): # the  function for the doom situation of division by 0
    global DoomLoop #this declares DoomLoop as a global variable so it is accable by functions
    global printResult #same as ^
    random_element = random.choice(DivB0Lore)
    while DoomLoop < 5:
        random_element = random.choice(DivB0Lore)
        print(random_element)
        DoomLoop += 1
        printResult = False
    return "Suggestion: DO NOT divide by zero next time"

# The actuall calculator stuff
if OperationSym == '+':
    result = number1 + number2
elif OperationSym == '-':
    result = number1 - number2
elif OperationSym == '*':
    result = number1 * number2
elif OperationSym == '/':
    if number2 == 0:
        result = Imminent()
    else:
        result = number1 / number2
else:
    result = "Invalid operation symbol"

# prints result
print(f"RESULT: {result}")