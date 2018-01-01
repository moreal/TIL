from tkinter import *
import time
import random

# Initialize
tk = Tk()
tk.title("Bounce Game") # Set Window Title
tk.resizable(0,0)
tk.wm_attributes("-topmost",1)

canvas = Canvas(tk, width=500, height=600, bd = 0, highlightthickness=1) # bd, highlightthickness ??????
canvas.pack()
ball = 0

# Bounce ball class
class Ball:
    def __init__(self, canvas, color):
        self.canvas = canvas
        self.id = canvas.create_oval(10,10,25,25,fill=color)
        self.canvas.move(self.id,245,100)

        starts = list(range(-3,4))
        random.shuffle(starts)

        self.x = starts[0]
        self.y = -3

        self.canvas_height = 400
        self.canvas_width = 500

    def draw(self):
        self.canvas.move(self.id, 0, -1) # 세로 1픽셀 위로
        pos = self.canvas.coords(self.id) # x1, y1, x2, y2
        if pos[1] <= 0:
            self.y = 3
        if pos[3] >= self.canvas_height:
            self.y = -3
        if pos[0] <= 0:
            self.x = 3
        if pos[2] >= self.canvas_width:
            self.x = -3

# event Function
def move_object(obj, event):
    if event.keysym == "Up":
        canvas.move(obj, 0, 3)
    elif event.keysym == "Down":
        canvas.move(obj, 0, -3)
    elif event.keysym == "Left":
        canvas.move(obj, -3, 0)
    else:
        canvas.move(obj, 3, 0)

def move_polygon(event):
    move_object(ball, event)

# Drawing Test
"""
canvas.create_arc(10,10,100,100,extent=359,style=ARC) # 원 출력
canvas.create_rectangle(10,10,100,100,fill="green") # 사각형 출력 
canvas.create_line(10,10,100,100) # 선 출력
polyglot = canvas.create_polygon(200,10,240,30,120,100,140,120,fill="green",outline="blue") # 폴리곤
gg = canvas.create_text(150,100, text="Good Game!!", fill="blue",font=("NanumGothic",30)) # 텍스트 출력
"""

# Event Bind
canvas.bind_all("<KeyPress-Up>", move_polygon)
canvas.bind_all("<KeyPress-Down>", move_polygon)
canvas.bind_all("<KeyPress-Right>", move_polygon)
canvas.bind_all("<KeyPress-Left>", move_polygon)

# Bounce Ball Create
ball = Ball(canvas, "red")
while True:
    ball.draw()
    tk.update_idletasks()
    tk.update()
    time.sleep(0.01)

# Loop in callback
tk.mainloop()

"""
가변인자
def create_rectangle(self, *args, **kw):
"""
