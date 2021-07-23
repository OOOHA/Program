from turtle import *

setposition(-100,-200)

color('pink')
bgcolor('black')
pensize(3)
hideturtle()

def balls():
    begin_fill()
    circle(60)
    end_fill()

balls()
forward(150)

balls()
backward(25)

begin_fill()
for i in range(2):
    left(90)
    forward(300)
    left(90)
    forward(100)
end_fill()

left(90)
forward(300)

setposition(35,120)
balls()

left(90)
forward(100)
left(90)
forward(300)

setposition(-25,150)
color('black')
setheading(90)
forward(30)

exitonclick()