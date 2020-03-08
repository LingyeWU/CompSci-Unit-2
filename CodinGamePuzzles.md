Onboarding puzzle
---


```.py

while 1:
    enemy_1 = input()  # name of enemy 1
    dist_1 = int(input())  # distance to enemy 1
    enemy_2 = input()  # name of enemy 2
    dist_2 = int(input())  # distance to enemy 2

    # Write an action using print

    # Enter the code here
    
    if dist_1 < dist_2:
        print(enemy_1)
    else:
        print(enemy_2)
  ```
  
  The descendent
  ---
 ```.py
import sys
import math

# The while loop represents the game.
# Each iteration represents a turn of the game
# where you are given inputs (the heights of the mountains)
# and where you have to print an output (the index of the mountain to fire on)
# The inputs you are given are automatically updated according to your last actions.


# game loop
# This one is not that hard just to find the maximum of all mountians
while True:
    final = 0
    height = 0
    for i in range(8):
        mountain_h = int(input())  # represents the height of one mountain.
        if mountain_h>height:
            final = i
            height = mountain_h
    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr)

    # The index of the mountain to fire on.
    print(final)
```
Thor
----
```.py
# https://www.codingame.com/ide/puzzle/power-of-thor-episode-1
import sys
import math

# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# light_x: the X position of the light of power
# light_y: the Y position of the light of power
# initial_tx: Thor's starting X position
# initial_ty: Thor's starting Y position
light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]
current_x, current_y = initial_tx, initial_ty
# game loop
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.
    move_string = ""
    if current_y<light_y:
        move_string = "S"
        current_y = current_y + 1
    elif current_y>light_y:
        move_string = "N"
        current_y = current_y - 1
    if current_x<light_x:
        move_string = move_string + "E"
        current_x = current_x + 1
    elif current_x>light_x:
        move_string = move_string + "W"
        current_x = current_x - 1
    # A single line providing the move to be made: N NE E SE S SW W or NW
    print(move_string)
 ```
 
 There is no spoon
 ----
 
 ```.py
# get input of width and height

width = int(input())
height =  int(input()

grid = [input() for _ in range(height)]

# finding the neighbors
for y1 in range(height):
    for x1 in range(width):
        if grid[y1][x1].isdigit():
            x2, y2 = -1, -1
            x3, y3 = -1, -1

            for i in range(x1 + 1, width):
                if grid[y1][i].isdigit():
                    x2, y2 = i, y1
                    break

            for i in range(y1 + 1, height):
                if grid[i][x1].isdigit():
                    x3, y3 = x1, i
                    break

            print(x1, y1, x2, y2, x3, y3)

 ```
