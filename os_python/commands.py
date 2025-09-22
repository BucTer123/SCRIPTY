from filesystem import mkdir, ls, current_path
from utils import print_color
from game import play_game
from calc import calculate
from time import show_time
from chat import chat

def command_ls(args):
    print_color("".join(ls()), "green")


def command_mkdir(args):
    if mkdir(args[0]):
        print_color(f"Directory '{args[0]}' created.", "green")
    else:
        print_color(f"Directory '{args[0]}' already exists.", "red")


def command_clear(args):
    import os
    os.system("cls" if os.name == "nt" else "clear")


commands = {
    "ls": command_ls,
    "mkdir": command_mkdir,
    "clear": command_clear,
    "game": play_game,
    "calc": calculate,
    "weather": show_weather,
    "time": show_time,
    "chat": chat
}