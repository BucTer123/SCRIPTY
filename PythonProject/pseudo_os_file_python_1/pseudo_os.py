import os
import cmath
import requests
from art import text2art
def main():
    os.mkdir("/root")
    os.mkdir("/root/file.pp")
    os.mkdir("/home")
    os.mkdir("/home/file.pp")
    print("Welcome!\n")
    command = input("Write the command or write 'help'      =")
    if command == "help":
        print("This is list of commands in this pseudo_os           :\n")
        print("         1 = help <-- list of commands\n")
        print("         2 = exit <-- exit from the system\n")
        print("         3 = ls  <-- list of files\n")
        print("         4 = cd  <-- go to the path\n")
        print("         5 = py install <-- install without sudo \n")
        print("         6 = py update  <-- update without sudo\n")
        print("         7 = py remove  <-- remove without sudo\n")
        print("         8 = py clear-term <-- clear terminal without sudo\n")
        print("         9 = start_term_py <-- starting terminal\n")
        print("         10 = rm -rf <-- remove file or direction\n")
        print("         11 = cf     <-- create file or direction\n")
        print("         12 = create-user <-- create user from the sudo\n")
        print("         13 = create-pass <-- create password from the sudo\n")
        print("         14 = sudo py install <-- install with sudo\n")
        print("         15 = sudo py update <-- update with sudo\n")
        print("         16 = sudo py remove <-- remove with sudo\n")
        print("         17 = sudo py clear-term <-- create terminal with sudo\n")
        print("         18 = req <-- send request/s\n")
        print("         19 = txt2 <-- write the words or numbers in terminal\n")
        print("         20 = pyfetch <-- this is bad copy of neofetch but in my pseudo os!\n")
        print("         21 = calc <-- this is calculator\n")
        return
    elif command == "exit":
        exit(0)
    elif command == "ls":
        print("The list of files and paths :\n")
        print("     1 --> /root\n")
        print("     2 --> /root/file.pp\n")
        print("     3 --> /home\n")
        print("     4 --> /home/file.pp\n")
        return
    elif command == "cd":
        cd = input("Write the name of path to file :")
        print(cd + 'root')
        return
    elif command == "py install":
        app = input("Write the name of file to install or write 'help_apps'         :")
        if app == "help":
            print("This is list of apps in this pseudo_os           :\n")
            print("     1 = firefox\n")
            print("     2 = chrome\n")
            print("     3 = tor\n")
            print("     4 = nvim\n")
            print("     5 = vim\n")
            print("     6 = vscodium\n")
            return
        elif app == "firefox":
            print("Installing firefox......\n")
            firefox = requests.get("https://github.com/mozilla-firefox/firefox.git")
            print(firefox.status_code)
            return
        elif app == "chrome":
            print("Installing chrome......\n")
            chrome = requests.get("https://github.com/chromium/chromium.git")
            print(chrome.status_code)
            return
        elif app == "tor":
            print("Installing tor......\n")
            tor = requests.get("https://github.com/TheTorProject/gettor.git")
            print(tor.status_code)
            return
        elif app == "nvim":
            print("Intalling nvim......\n")
            nvim = requests.get("https://github.com/neovim/neovim.git")
            print(nvim.status_code)
            return
        elif app == "vim":
            print("Installing vim......\n")
            vim = requests.get("https://github.com/vim/vim.git")
            print(vim.status_code)
            return
        elif app == "vscodium":
            print("Installing vscodium......\n")
            vscodium = requests.get("https://github.com/VSCodium/vscodium.git")
            print(vscodium.status_code)
            return
    elif command == "py update":
        print("Updating system......")
        os.mkdir("/root/file.app/file_update")
        update = requests.get("https://github.com/BucTer123/File_update_for_pseudo_os_python-1.git")
        print(update.status_code)
        return
    elif command == "py remove":
        user = 'usr'
        write = input("Write the password to " + user + "!          :\n")
        if write == "help":
            print("This is list of apps in this pseudo_os           :\n")
            print("     1 = firefox\n")
            print("     2 = chrome\n")
            print("     3 = tor\n")
            print("     4 = nvim\n")
            print("     5 = vim\n")
            print("     6 = vscodium\n")
            return
        elif write == "firefox":
            os.remove("firefox")
        elif write == "chrome":
            os.remove("chrome")
        elif write == "tor":
            os.remove("tor")
        elif write == "nvim":
            os.remove("nvim")
        elif write == "vim":
            os.remove("vim")
        elif write == "vscodium":
            os.remove("vscodium")
    elif command == "py clear-term":
        print("Cleared!")
        print("root")
        return
    elif command == "start_term_py":
        user = input("Write the name of user :")
        passw = input("Write the password  :")
        print("Welcome" + user + "!\n")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        input("~/ " + user + passw + ":   |")
        print("End!")
    elif command == "rm -rf":
        rf = input("Write the name of file or dir to delete!       :")
        os.remove(rf)
    elif command == "cf":
        cf = input("Write the name of file or dir to create!        :")
        os.mkdir(cf)
    elif command == "create-user":
        input("Write the name of user :")
    elif command == "create-pass":
        input("Write the name of password :")
    elif command == "sudo py install":
        user = 'usr'
        write = input("Write the password to " + user + "!          :\n")
        while not (write == True):
            print("ERROR ! WRITE THE PASS TO THE USER! ")
        else:
            print("Success!\n")
            print("Welcome!" + user)
        print("Okay! \n")
        app = input(" Now write the name of file to install or write 'help_apps'         :")
        if app == "help":
            print("This is list of apps in this pseudo_os           :\n")
            print("     1 = firefox\n")
            print("     2 = chrome\n")
            print("     3 = tor\n")
            print("     4 = nvim\n")
            print("     5 = vim\n")
            print("     6 = vscodium\n")
            return
        elif app == "firefox":
            print("Installing firefox......\n")
            firefox = requests.get("https://github.com/mozilla-firefox/firefox.git")
            print(firefox.status_code)
            return
        elif app == "chrome":
            print("Installing chrome......\n")
            chrome = requests.get("https://github.com/chromium/chromium.git")
            print(chrome.status_code)
            return
        elif app == "tor":
            print("Installing tor......\n")
            tor = requests.get("https://github.com/TheTorProject/gettor.git")
            print(tor.status_code)
            return
        elif app == "nvim":
            print("Intalling nvim......\n")
            nvim = requests.get("https://github.com/neovim/neovim.git")
            print(nvim.status_code)
            return
        elif app == "vim":
            print("Installing vim......\n")
            vim = requests.get("https://github.com/vim/vim.git")
            print(vim.status_code)
            return
        elif app == "vscodium":
            print("Installing vscodium......\n")
            vscodium = requests.get("https://github.com/VSCodium/vscodium.git")
            print(vscodium.status_code)
            return
    elif command == "sudo py update":
        user = 'usr'
        write = input("Write the password to " + user + "!          :\n")
        while not (write == True):
            print("ERROR ! WRITE THE PASS TO THE USER! ")
        else:
            print("Success!\n")
            print("Welcome!" + user)
        print("Okay! \n")
        print("Updating system......")
        os.mkdir("/root/file.app/file_update")
        update = requests.get("https://github.com/BucTer123/File_update_for_pseudo_os_python-1.git")
        print(update.status_code)
        return
    elif command == "sudo py remove":
        user = 'usr'
        write = input("Write the password to " + user + "!          :\n")
        while not (write == True):
            print("ERROR ! WRITE THE PASS TO THE USER! ")
        else:
            print("Success!\n")
            print("Welcome!" + user)
        print("Okay! \n")
        remove = input("Write the name of app to delete or write 'help'          :\n")
        if remove == "help":
            print("This is list of apps in this pseudo_os           :\n")
            print("     1 = firefox\n")
            print("     2 = chrome\n")
            print("     3 = tor\n")
            print("     4 = nvim\n")
            print("     5 = vim\n")
            print("     6 = vscodium\n")
            return
        elif remove == "firefox":
            os.remove("firefox")
        elif remove == "chrome":
            os.remove("chrome")
        elif remove == "tor":
            os.remove("tor")
        elif remove == "nvim":
            os.remove("nvim")
        elif remove == "vim":
            os.remove("vim")
        elif remove == "vscodium":
            os.remove("vscodium")
    elif command == "sudo clear-term":
        user = 'usr'
        write = input("Write the password to " + user + "!          :\n")
        while not (write == True):
            print("ERROR ! WRITE THE PASS TO THE USER! ")
        else:
            print("Success!\n")
            print("Welcome!" + user)
        print("Okay! \n")
        print("Cleared!")
        print("root")
        return
    elif command == "req":
        resp = input("Write the path to the site who create request         :")
        resp = requests.get(resp)
        print(resp.status_code)
        return
    elif command == "txt2":
        art = input("Write the text to be printed   :")
        result = text2art(art)
        print(result)
    elif command == "pyfetch":
        maintext = text2art("Pyfetch")
        ose = text2art("OS = PyOs")
        kernel = text2art("Kernel = Nope")
        version = text2art("PyVersion = Nope")
        print(maintext + "\n")
        print(ose + "\n")
        print(kernel + "\n")
        print(version + "\n")
        return
    elif command == "calc ":
        a = float(input("Write the first number     :"))
        b = float(input("Write the second number     :"))
        calc = input("Write the command or write 'help'         :")
        if calc == "help":
            print("This is list of commands for calculator     :")
            print("     1 = plus(+)")
            print("     2 = minus(-)")
            print("     3 = multiply(*)")
            print("     4 = divide(*)")
        elif calc == "plus" or "+":
            print(a + b)
        elif calc == "minus" or "-":
            print(a - b)
        elif calc  == "multiply" or "*":
            print(a * b)
        elif calc == "divide" or "/":
            if b == 0:
                print("ERROR!")
            else:
                print(a / b)
            exit(0)
    elif command == "":
        print("ERROR Write the command")
    exit(0)
