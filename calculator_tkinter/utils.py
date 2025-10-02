from operations import add, substract, multiply, divide, sin, cos, tan, sqrt, log

def calculate_expression(op, a, b=None):
    try:
        a = float(a)
        if b is not None:
            b = float(b)
        if op == '+':
            return add(a, b)
        elif op == '-':
            return substract(a, b)
        elif op == '*':
            return multiply(a, b)
        elif op == '/':
            return divide(a, b)
        elif op == 'sin':
            return sin(a)
        elif op == 'cos':
            return cos(a)
        elif op == 'tan':
            return tan(a)
        elif op == 'sqrt':
            return sqrt(a)
        elif op == 'log':
            return log(a)
    except ValueError:
        return "Error! WRITE!"
        