import tkinter

f = open("input.txt", "r")

master = tkinter.Tk()
canvas = tkinter.Canvas(master, bg='blue',
                        height=900, width=900)
canvas.pack()
water = tkinter.PhotoImage(file="images/water.gif")
earth = tkinter.PhotoImage(file="images/earth.gif")
forest = tkinter.PhotoImage(file="images/forest.gif")
hill = tkinter.PhotoImage(file="images/hill.gif")
black_earth = tkinter.PhotoImage(file="images/black_earth.gif")
mountain = tkinter.PhotoImage(file="images/mountain.gif")
cave = tkinter.PhotoImage(file="images/cave.gif")
all_ = tkinter.PhotoImage(file="images/all.gif")
civ = tkinter.PhotoImage(file="images/civ.gif")
plat = tkinter.PhotoImage(file="images/plat.gif")
b = [water, earth, forest, hill, black_earth, mountain, cave, all_, civ, plat]
for i in range(100):
    a = list(f.readline())
    for j in range(100):
        canvas.create_image((j * 9, i * 9), image=b[int(a[j])], anchor='nw')

master.mainloop()
