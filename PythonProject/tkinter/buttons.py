import tkinter as tk


def wind():
    a = tk.Tk()
    tk.Label(a, text="I create second window!").pack()

def scwind():
    b = tk.Tk()
    tk.Label(b, text="I created third window!").pack()

def thwind():
    c = tk.Tk()
    tk.Label(c, text="I created fourth window!").pack()

root = tk.Tk()
root.geometry("300x300")
root.title("Welcome!")

tk.Label(root, text="Buttons").pack()

wind = tk.Button(root, text="Click me!", command=wind)
wind.pack()

scwind = tk.Button(root, text="Click me!", command=scwind)
scwind.pack()

thwind = tk.Button(root, text="Click me!", command=thwind)
thwind.pack()

tk.Label(root, text="^    This is the buttons if you click this you create the window!\n").pack()
tk.Label(root, text="|    \n").pack()
tk.Label(root, text="|    \n").pack()

if __name__ == "__buttons__":
    root.mainloop()