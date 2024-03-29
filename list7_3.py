import tkinter

BLACK = 1
WHITE = 2
board = [
 [0, 2, 2, 2, 2, 2, 2, 1],
 [2, 2, 0, 0, 0, 0, 0, 0],
 [2, 0, 2, 0, 0, 1, 0, 0],
 [2, 0, 0, 1, 0, 2, 0, 0],
 [2, 0, 0, 0, 0, 2, 0, 0],
 [2, 0, 0, 1, 2, 0, 2, 1],
 [2, 0, 0, 0, 0, 2, 0, 0],
 [1, 0, 0, 0, 0, 1, 0, 0]
]

def click(e):
    mx = int(e.x/80)
    my = int(e.y/80)
    if mx>7: mx = 7
    if my>7: my = 7
    if board[my][mx]==0:
        ishi_utsu(mx, my, BLACK)
    banmen()

def banmen():
    cvs.delete("all")
    for y in range(8):
        for x in range(8):
            X = x*80
            Y = y*80
            cvs.create_rectangle(X, Y, X+80, Y+80, outline="black")
            if board[y][x]==BLACK:
                cvs.create_oval(X+10, Y+10, X+70, Y+70, fill="black", width=0)
            if board[y][x]==WHITE:
                cvs.create_oval(X+10, Y+10, X+70, Y+70, fill="white", width=0)
    cvs.update()

# 石を打ち、相手の石をひっくり返す
def ishi_utsu(x, y, iro):
    board[y][x] = iro
    for dy in range(-1, 2):
        for dx in range(-1, 2):
            k = 0
            sx = x
            sy = y
            while True:
                sx += dx
                sy += dy
                if sx<0 or sx>7 or sy<0 or sy>7:
                    break
                if board[sy][sx]==0:
                    break
                if board[sy][sx]==3-iro:
                    k += 1
                if board[sy][sx]==iro:
                    for i in range(k):
                        sx -= dx
                        sy -= dy
                        board[sy][sx] = iro
                    break

root = tkinter.Tk()
root.title("リバーシ")
root.resizable(False, False)
root.bind("<Button>", click)
cvs = tkinter.Canvas(width=640, height=700, bg="green")
cvs.pack()
banmen()
root.mainloop()
