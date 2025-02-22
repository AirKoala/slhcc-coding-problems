# Fix the below program - find the problem(s) and fix them
# Program should print the apple's color based on the Color enum class - should output Color.RED as it's a red apple

# NOTE:
# problem description is a little vague. it is unclear whether the print is supposed to go in the constructor or outside
# side effects in constructor is usually bad practice so you might want to reword it to nudge towards cleaner code somehow

from enum import Enum

class Color(Enum):
    RED = 0,
    GREEN = 1
    
class Apple:
    def __init__(self, color):
        self.color = color

        match self.color:
            case Color.RED:
                print("red")
            case Color.GREEN:
                print("green")

apple = Apple(Color.RED)
    
