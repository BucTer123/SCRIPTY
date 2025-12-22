import requests
from colorama import *
import os

def os():
    rm = 1000
    us_rm = 400
    rm_nuse = 600
    os.mkdir("/root")
    os.mkdir("/root/updates")
    os.mkdir("/root/servers")
    os.mkdir("/root/browse+his")
    os.mkdir("/root/npkg")
    os.mkdir("/root/apps")

def main():
    print(Fore.GREEN + "Welcome!\b")
    term = input(Fore.CYAN + "Write the command on this term or write 'hl+term'     :")
    if term == "hl+term":
        print(Fore.BLUE + "This is list of commands:\n")
        print(Fore.BLUE + " 1 => hl+term\n")
        print(Fore.BLUE + " 2 => exit+term\n")
        print(Fore.BLUE + " 3 => browse\n")
        print(Fore.BLUE + " 4 => time+now\n")
        print(Fore.BLUE + " 5 =? shutdown-sys\n")
        print(Fore.BLUE + " 6 => update\n")
        print(Fore.BLUE + " 7 => create-serv\n")
        print(Fore.BLUE + " 8 => delete-serv\n")
    elif term == "exit-term":
        print(Fore.WHITE + "Shutdown term......\n")
        exit(0)
    elif term == "browse":
        print(Fore.LIME + "Welcome to the browser!\n")
        browse = input(Fore.LiME + "Search in Browse.....for ex games, apps\n")
        if browse == "games":
            games = input(Fore.LIME + "Write the name of game or write 'gm+ls'  :")
            if games == "gm+ls":
                print(Fore.RED + " 1 => r_p_s\n")
                print(Fore.RED + " 2 => g_num\n")
                print(Fore.RED + " 3 => d_d_os\n")
            elif games == "r_p_s":
                rps = requests.get("https://github.com/BucTer123/RPS.git")
                print(rps.status_code)
            elif games == "g_num":
                gnum = requests.get("https://github.com/BucTer123/GNUM.git")
                print(gnum.status_code)
            elif games == "d_d_os":
                ddos = requests.get("https://github.com/BucTer123/d_d_os.git")
                print(ddos.status_code)
        elif browse == "apps":
            apps = input(Fore.LIME + "Write the name of app or write 'ap+ls'  :")
            if apps == "ap+ls":
                print(Fore.CYAN + " 1 => note_boba\n")
            elif apps == "note_boba":
                nt_boba = requests.get("https://github.com/BucTer123/NT_BIBA.git")
                print(nt_boba.status_code)
    elif term == "time+now":
        print("IDK!!!")
    elif term == "shutdown-sys":
        print("RAM \n")
        print("RAM USED\n")
    elif term == "update":
        update = requests.get("https://github.com/BucTer123/File_update_for_pseudo_os_python-1.git")
        print(update.status_code)
    elif term == "create-serv":
        phph = requests.get("https://github.com/BucTer123/server_php_create.git")
        print(phph.status_code)
    elif term == "delete-serv":
        hphp = requests.get("https://github.com/BucTer123/delete_serv.git")
        print(hphp.status_code)
exit(0)