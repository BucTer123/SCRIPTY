import os
import requests

def main():
    print("Welcome!\n")
    command = input("Write the command or write 'help'      :\n")
    if command == "help":
        print("The list of commands :\n")
        print("         1 = exit\n")
        print("         2 = help\n")
        print("         3 = cd <--- create dir\n")
        print("         4 = dd <--- delete dir\n")
        print("         5 = ls <--- list of files\n")
        print("         6 = req <--- request to site\n")
        exit(0)
    elif command == "exit":
        exit(0)
    elif command == "cd":
        name_add = input("Write the name of file to create  :")
        os.mkdir(name_add)
        print("Created" + name_add + "!")
        exit(0)
    elif command == "dd":
        name_delete = input("Write the name of file to delete    :")
        os.remove(name_delete)
        print("Deleted" + name_delete + "!")
        exit(0)
    elif command == "ls":
        for list in range(2):
            print("Directory: /home")
            print("Directory: /buzz")
        list_files = "ls"
        print(list_files)
        exit(0)
    elif command == "req":
        req = input("Write the name of site to request!             :")
        num = input("Write the number of requests to the site!      :")
        resp = req
        print(resp.status_code)
        for i in range(num):
            requests.get(req)
        exit(0)