from datetime import datetime
from utils import print_color


def show_time(args):
    now = datetime.now()
    print_color(now.strftime("Curent date and time: %Y-%m-%d %H:%M:%S"), "blue")