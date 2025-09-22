import random
from utils import print_color


def play_game(args):
    print_color("Welcome to Guess the Number!", "yellow")
    number = random.randint(1, 100)
    attempts = 0
    while True:
        guess = input("Enter your guess (1-100) or 'exit': ")
        if guess.lower() == 'exit':
            break
        if not guess.isdigit():
            print_color("Please enter a number!", "red")
            continue
        guess = int(guess)
        attempts += 1
        if guess < number:
            print_color("Too low!", "blue")
        elif guess > number:
            print_color("Too high!", "blue")
        else:
            print_color(f"Corect! Attempts:{attempts}", "green")
            break