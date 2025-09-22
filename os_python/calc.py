from utils import print_color


def calculate(args):
    if not args:
        print_color("Usage: calc <expression>", "red")
        return
    expression = " ",join(args)
    try:
        result = eval(expression)
        print_color(f"Result: {result}", "green")
    except Exception as e:
        print_color(f"Error: {e}", "red")