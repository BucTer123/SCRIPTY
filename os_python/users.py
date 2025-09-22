users = {"root": "1234", "guest": "guest"}
current_user = None


def login():
    global current_user
    username = input("Username: ")
    password = input("Password: ")
    if username in users and users[username] == password:
        current_user = username
        print(f"Welcome, {username}!")
        return True
    else:
        print("INVALID CREDENTIALS!")
        return False