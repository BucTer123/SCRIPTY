import random
from utils import print_color


def show_weather(args):
    conditions = ["Sunny", "Cloudy", "Rainy", "Stormy", "Snowy"]
    temperature = random.randint(-10, 35)
    condition = random.choice(conditions)
    print_color(f"Weather: {condition}, Temperature {temperature} of Celsius", "yellow")
    