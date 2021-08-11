from ursina import *

app = Ursina()

window.color = color.black
table = Entity(
    model = 'cube',
    color = color.black,
    scale = (2,1,3),
    rotation = (90,0,0)
)

ball = Entity(
    model = 'sphere',
    color = color.yellow,
    z = -1,
    scale = 0.1,
    collider = 'sphere'
)

player1 = Entity(
    model = 'cube',
    color = color.yellow,
    scale = (0.6,0.1,1),
    position = (0,-1,4,-1),
    collider = 'box'
)

player2 = duplicate(player1, y = 1.4)

speed_x = speed_y = 0.1

def update():
    global speed_x, speed_y
    ball.x += speed_x * time.dt
    ball.y += speed_y * time.dt
    if abs(ball.x) > 0.9:
        speed_x = -speed_x
    if abs(ball.y) > 1.4:
        ball.x = ball.y = 0

    player1.x += held_keys['d'] * time.dt
    player1.x -= held_keys['a'] * time.dt
    player1.x += held_keys['right arrow'] * time.dt
    player1.x -= held_keys['left arrow'] * time.dt

    if ball.intersects().hit:
        speed_y = -speed_y
        speed_x *= 1.1
        speed_y *= 1.1


camera.othographic = True
camera.fov = 4
app.run()