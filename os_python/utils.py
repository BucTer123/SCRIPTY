def print_color(text, color):
    colors = {
        "red": "\033[91m",
        "green": "\033[92m",
        "yellow": "\033[93m",
        "blue": "\033[94m",
        "end": "\033[0m",
    }
    print(f"{colors.get(color, '')}{text}{colors['end']}")