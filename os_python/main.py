from commands import commands
from user import login


def main():
    if not login():
        return


    while True:
        cmd_input = input(f"{login.current_user}@pseudoOs>").split()
        if not cmd_input:
            continue
        cmd_name, *args = cmd_input
        if cmd_name == "exit":
            break
        if cmd_name in commands:
            try:
                commands[cmd_name](args)
            except Exception as e:
                print("Error:!", e)
        else:
            print("Commands not found.")


if __name__ == "__main__":
    main()
    