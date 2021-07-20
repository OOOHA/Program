from turtle import *
color('green')
bgcolor('black')
speed(15)
hideturtle()
b = 0
while b < 200:
    right(b)
    forward(b * 3)
    b = b + 1

exitonclick()