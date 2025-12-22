#modules
import tkinter as tk
import os

#root window
root = tk.Tk()

#name for app
root.title("Pseudo_os")

#size screen
root.geometry("1920x1080")

#commentators
"""
F
U
C
K

Y
O
U
!
"""
#if/else/while
#help
def helpss():
    z = tk.Tk()
    tk.Label(z,text="Help list :").pack()
    tk.Label(z,text=" 1 = help").pack()
    tk.Label(z,text=" 2 = term").pack()
    tk.Label(z,text=" 3 = exit").pack()

#term
def termss():
    o = tk.Tk()
    term = tk.Label(o, text="Welcome to the terminal   :")
    input_term = tk.Entry(term)
    term.pack()
    input_term.get()
    if input_term == "help":
        tk.Label(o, text="mkdir").pack()
        tk.Label(o, text="rmdir").pack()
    elif input_term == "mkdir":
        mkdir = tk.Label(o, text="Write the name of file to create  :")
        mkdir.pack()
        input_mkdir = tk.Entry(mkdir)
        input_mkdir.get()
        os.mkdir("{input_mkdir.get()}")
        print("Created file")
    elif input_term == "rmdir":
        rmdir = tk.Label(o, text="Write the name of file to remove  :")
        rmdir.pack()
        input_rmdir = tk.Entry(rmdir)
        input_rmdir.get()
        os.rmdir("{input_rmdir.get()}")
        print("Removed file")
#Leave
def exits():
    tk.Label(root, text="Exit the system   :")
    root.destroy()
    exit(0)

#creating the main welcome text
start = tk.Label(root, text="Welcome to pseudo os!", width=11, height=1)
start.pack()

#Input for the commands
text_command = tk.Label(root, text="Write the command or write 'help'  :")
input_command = tk.Entry.get
text_command.pack()

#buttons
helpss = tk.Button(root, text="help_commands",width=15, command=helpss)
helpss.pack()
termss = tk.Button(root, text="term", width=15, command=termss)
termss.pack()
exits = tk.Button(root, text="exit", width=15, command=exits)
exits.pack()

root.mainloop()
root.destroy()
exit(0)
