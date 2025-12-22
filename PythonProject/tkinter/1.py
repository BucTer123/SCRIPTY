import tkinter as tk

root = tk.Tk()
root.title("1")
root.geometry("1920x1080")

tk.Label(root, text="1", width=10, borderwidth=0, font=("Arial", 25)).pack()
tk.Label(root, text="Bye!", width=10, borderwidth=0, font=("Arial", 25)).pack()

root.mainloop()
root.destroy()
