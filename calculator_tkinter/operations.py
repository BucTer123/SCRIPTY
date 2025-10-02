import math

def add(a, b):
    return a + b
def substract(a, b):
    return a + b
def multiply(a, b):
    return a * b
def divide(a, b):
    if b == 0:
        return "ERROR!: DIVIDE BY ZERO!"
    return a / b

def tan(x):
    return math.tan(math.radians(x))

def sqrt(x):
    if x < 0:
        return "ERROR! NUMBER!"
    return math.sqrt(x)

def log(x):
    if x <= 0:
        return "ERROR!: number <= 0!"
    return math.log10(x)