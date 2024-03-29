import tkinter
import tkinter.messagebox
import random

FS = ("Times New Roman", 30)
FL = ("Times New Roman", 80)
BLACK = 1
WHITE = 2
mx = 0
my = 0
mc = 0
proc = 0
turn = 0
msg = ""
space = 0
color = [0]*2
who = ["あなた", "コンピュータ"]
board = []
back = []

for y in range(8):
    board.append([0]*8)
    back.append([0]*8)

def click(e):
    global mx, my, mc
    mc = 1
    mx = int(e.x/80)
    my = int(e.y/80)
    if mx > 7: mx = 7
    if my > 7: my = 7

def banmen():
    cvs.delete("all")
    cvs.create_text(320, 670, text = msg, fill = "silver", font = FS)
    for y in range(8):
        for x in range(8):
            X = x * 80
            Y = y * 80
            cvs.create_rectangle(X, Y, X+80, Y+80, outline = "black")
            if board[y][x]==BLACK:
                cvs.create_oval(X+10, Y+10, X+70, Y+70, fill = "black", width=0)
            if board[y][x]==WHITE:
                cvs.create_oval(X+10, Y+10, X+70, Y+70, fill = "white", width=0)
    cvs.update()

def ban_syokika():
    global space
    space = 60
    for y in range(8):
        for x in range(8):
            board[y][x] = 0
    board[3][4] = BLACK
    board[4][3] = BLACK
    board[3][3] = WHITE
    board[4][4] = WHITE

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

# そこに打つといくつ返せるか数える
def kaeseru(x, y, iro):
    if board[y][x]>0:
        return -1 # 置けないマス
    total = 0
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
                    total += k
                    break
    return total

# 打てるマスがあるか調べる
def uteru_masu(iro):
    for y in range(8):
        for x in range(8):
            if kaeseru(x, y, iro)>0:
                return True
    return False

# 黒い石、白い石、いくつかあるか数える
def ishino_kazu():
    b = 0
    w = 0
    for y in range(8):
        for x in range(8):
            if board[y][x]==BLACK: b += 1
            if board[y][x]==WHITE: w += 1
    return b, w



# モンテカルロ法を用いた戦略

#局面の状態を保持する
def hoji():
    for y in range(8):
        for x in range(8):
            back[y][x] = board[y][x]

#局面の状態を復元する
#両方の石が打てなくなるまで打つ
def fukugen():
    for y in range(8):
        for x in range(8):
            board[y][x] = back[y][x]

#石をランダムに打つ
def utsu_M(iro):
    while True:
        if uteru_masu(BLACK)==False and uteru_masu(WHITE)==False:
            break
        iro = 3-iro 
        if uteru_masu(iro)==True:
            while True:
                x = random.randint(0, 7)
                y = random.randint(0, 7)
                if kaeseru(x, y, iro)>0:
                    ishi_utsu(x, y, iro)
                    break

def computer_2(iro, loops):
    global msg
    win = [0]*64
    hoji()
    for y in range(8):
        for x in range(8):
            if kaeseru(x, y, iro)>0:
                msg += "."
                banmen()
                win[x+y*8] = 1
                for i in range(loops):
                    ishi_utsu(x, y, iro)
                    utsu_M(iro)
                    b, w = ishino_kazu()
                    if iro==BLACK and b>w:
                        win[x+y*8] += 1
                    if iro==WHITE and w>b:
                        win[x+y*8] += 1
                    fukugen()
    m = 0
    n = 0
    for i in range(64):
        if win[i]>m:
            m = win[i]
            n = i
    x = n%8
    y = int(n/8)
    return x, y

def main():
    global mc, proc, turn, msg, space
    banmen()
    if proc==0: # タイトル画面
        msg = "先手、後手を選んでください"
        cvs.create_text(320, 200, text="Reversi", fill="gold", font=FL)
        cvs.create_text(160, 440, text="先手(黒)", fill="lime", font=FS)
        cvs.create_text(480, 440, text="後手(白)", fill="lime", font=FS)
        if mc==1: # ウィンドウをクリック
            mc = 0
            if (mx==1 or mx==2) and my==5:
                ban_syokika()
                color[0] = BLACK
                color[1] = WHITE
                turn = 0
                proc = 1
            if (mx==5 or mx==6) and my==5:
                ban_syokika()
                color[0] = WHITE
                color[1] = BLACK
                turn = 1
                proc = 1
    elif proc==1: # どちらの番か表示
        msg = "あなたの番です"
        if turn==1:
            msg = "コンピュータ 考え中."
        proc = 2
    elif proc==2: # 石を打つマスを決める
        if turn==0: # プレイヤー
            if mc==1:
                mc = 0
                if kaeseru(mx, my, color[turn])>0:
                    ishi_utsu(mx, my, color[turn])
                    space -= 1
                    proc = 3
        else: # コンピュータ
            MONTE = [300, 300, 240, 180, 120, 60, 1]
            cx, cy = computer_2(color[turn], MONTE[int(space/10)])
            ishi_utsu(cx, cy, color[turn])
            space -= 1
            proc = 3
    elif proc==3: # 打つ番を交代
        msg = ""
        turn = 1-turn
        proc = 4
    elif proc==4: # 打てるマスがあるか
        if space==0:
            proc = 5
        elif uteru_masu(BLACK)==False and uteru_masu(WHITE)==False:
            tkinter.messagebox.showinfo("", "どちらも打てないので終了です")
            proc = 5
        elif uteru_masu(color[turn])==False:
            tkinter.messagebox.showinfo("", who[turn]+"は打てないのでパスです")
            proc = 3
        else:
            proc = 1
    elif proc==5: # 勝敗判定
        b, w = ishino_kazu()
        tkinter.messagebox.showinfo("終了", "黒={}、白={}".format(b, w))
        if (color[0]==BLACK and b>w) or (color[0]==WHITE and w>b):
            tkinter.messagebox.showinfo("", "あなたの勝ち！")
        elif (color[1]==BLACK and b>w) or (color[1]==WHITE and w>b):
            tkinter.messagebox.showinfo("", "コンピュータの勝ち！")
        else:
            tkinter.messagebox.showinfo("", "引き分け")
        proc = 0
    root.after(100, main)

root = tkinter.Tk()
root.title("リバーシ")
root.resizable(False, False)
root.bind("<Button>", click)
cvs = tkinter.Canvas(width=640, height=700, bg="green")
cvs.pack()
root.after(100, main)
root.mainloop()

