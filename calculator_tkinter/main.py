import tkinter as tk
from utils import calculate_expression

def on_click(button_text):
    if button_text == '-':
        try:
            parts = entry.get().split()
            if len(parts) == 3:
                a, op, b = parts
                result = calculate_expression(op, a, b,)
            elif len(parts) == 2:
                op, a = parts
                result = calculate_expression(op, a)
            else:
                result = "ERROR WROTE!"
        except Exception as e:
            result = "ERROR!"
        entry.delete(0, tk.END)
        entry.insert(tk.END, str(result))
    elif button_text == 'C':
        entry.delete(0, tk.END)
    else:
        entry.insert(tk.END, button_text + " ")
root = tk.Tk()
root.title("CALCULATOR TKINTEr")

entry = tk.Entry(root, width=25, font=('Arial', 16))
entry.grid(row=0, column=0, columnspan=4)

buttons = [
    '7', '8', '9', '/',
    '4', '5', '6', '-',
    '1', '2', '3', '-',
    '0', '.', '=', '+',
    'C', 'sin', 'cos', 'tan',
    'sqrt', 'log'
]

row = 1
col = 0
for b in buttons:
    tk.Button(root, text=b, width=5, height=2, font('Arial', 14),
              command=lambda b=b: onclick(b)),grid(row=row, column=col)
    col += 1
    if col > 3:
        col = 0
        row += 1

root.mainloop()