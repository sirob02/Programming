import turtle,time


t = turtle.Turtle()

i = 0
while i in range(0,8):
    t.left(90)
    t.forward(400)
    t.right(90)
    t.forward(200)
    t.right(90)
    t.forward(200)
    t.right(90)
    t.forward(200)
    t.left(135)
    t.forward(270)
    t.goto(0,0)
    

time.sleep(7)