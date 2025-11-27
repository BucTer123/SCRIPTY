print("Welcome\n!");
print("Choice the command or write 'help'       :");
local command;
io.read(command);
if (command == "help") then
    print("1        exit\n");
    print("2        ls\n");
    print("3        cd\n");
    print("4        l update\n");
    print("5        l install\n");
    print("6        l --version\n");
    print("7        l remove\n");
    print("8        reboot\n");
    print("9        что етот дидиблан \n");
    print("10       open file");
elseif (command == "exit") then
    exit();
elseif (command == "ls") then
    print("choice ls   :");
    local ls;
    io.read(ls);
    if (ls == "/lua") then
        print("filesystem for /lua   <--- this is sercret file you dont open this");
    elseif (ls == "/doc") then
        print("documents for /lua  <--- this is sevret file you dont open this");
elseif (command == "cd") then
    print("choice cd        :");
    local choice_cd;
    print("/root@{username}" + choice_cd + "/~");
elseif (command == "l update") then
    print("Updating System.....\n");
    local file_update_0 = io.open("update_0.lua", "w");
    print("Update(1/8)..........\n");
    local file_update_1 = io.open("update_1.lua", "w");
    print("Update(2/8)...........\n");
    local file_update_2 = io.open("update_2.lua", "w");
    print("Update(3/8)............\n");
    local file_update_3 = io.open("update_3.lua", "w");
    print("Update(4/8).............\n");
    local file_update_4 = io.open("update_4.lua ", "w");
    print("Update(5/8)...............\n");
    local file_update_5 = io.open("update_5.lua", "w");
    print("Update(6/8)................\n");
    local file_update_6 = io.open("update_6.lua ", "w");
    print("Update(7/8)..................\n");
    local file_update_7 = io.open("update_7.lua", "w");
    print("Update(8/8)........................\n");
    local file_update_8 = io.open("update_8.lua", "w");
    local error = 0;
    local problems = 0;
    print("Errors" + error + "\n");
    print("Problems" + problems + "\n");
    print("Updated System!\n");
    print("Write the -l list update to see the new update !\n");
    print("Installed:\n");
    print("1    file_update_0\n");
    print("2    file_update_1\n");
    print("3    file_update_2\n");
    print("4    file_update_3\n");
    print("5    file_update_4\n");
    print("6    file_update_5\n");
    print("7    file_update_6\n");
    print("8    file_update_7\n");
    print("This is all of updates!");
    print("Now we compilating the files......\n");
    file_update_0 = print("Updated!");
    file_update_1 = print("Updated!");
    file_update_2 = print("Updated!")
    file_update_3 = print("Updated!");
    file_update_4 = print("Updated!");
    file_update_5 = print("Updated!");
    file_update_6 = print("Updated!");
    file_update_7 = print("Updated!");
    file_update_8 = print("Updated!");
elseif (command == "l install") then
    print("Choice the command  :\n");
    local choice_cmd;
    io.read(choice_cmd);
    if (choice_cmd == "nvim") then
        print("installing the neovim!")
        local get = http.requests("https://github.com/neovim/neovim.git");
        print("Take a files from github\n");
        local install_nvim = io.install(get);
        print("Installed" + install_nvim);
    elseif (choice_cmd == "firefox") then 
        print("installing the firefox\n");
        local get_fire = http.requests("https://github.com/mozilla-firefox/firefox.git");
        print("Take a files from github\n");
        local install_firefox = io.install(get_fire);
        print("Installed" + install_firefox);
        exit();
    elseif (choice_cmd == "terminal-gnome") then
        print("installing the terminal-gnome!"\n);
        local get_term = http.requests("https://github.com/GNOME/gnome-terminal.git");
        local install_gnome = io.install(get_term);
        print("installed! " + install_gnome );
        exit();
elseif (command == "l --version") then 
        print("Welcome to version util!\n");
        print(" l       version alpha 0.01");
        local app_version;
        print("Write the name of app to know the version!");
        io.read(app_version);
        if (app_version == "nvim") then
            print("Version of nvim now is  0.11");
        elseif (app_version == "firefox") then 
            print("Version of firefox now is 145.0.1");
        exit();
elseif (command == "l remove") then
    local remove;
    print("Write the name of file to remove or game  :");
    io.read(remove);
    if (remove == "nvim") then 
        print("Deleting the neovim");
        local nvim_remove = io.remove(nvim);
        print(nvim_remove);
        print("Deleted" + nvim_remove + "!");
    elseif (remove == "firefox") then 
        print("Deleting the firefox");
        local firefox_remove = io.remove(firefox);
        print("Deleted" + firefox_remove + "!");
    elseif (remove == "gnome-terminal") then
        print("Deleting the gnome-terminal");
        local terminal_gnome_remove = io.remove(gnome-terminal);
        print("Deleted" + terminal_gnome_remove + "!");
    elseif (remove == "filesystem for /lua") then 
        print("ERROR!   :\n");
        print("File: filesystem for /lua is root file you dont delete this !");
    elseif (remove == "documents for /lua") then 
        print("ERROR!   :\n");
        print("File: documents for /lua is root file you dont delete this  !");
    elseif (remove == "") then 
        print("You dont write the name of file !");
        local name_empty;
        io.read(name_empty);
        print("Deleted " + name_empty + "!");
elseif (command == "reboot") then 
    print("Rebooting system,,,,,");
    io.Rebooting;
elseif (command == "Что етот дидиблад") then 
    print("Делает на калькуляторе он что ЕНШТЕЙН !!!");
    exit();
elseif (command == "open") then 
    print("choice the file to open");
    local open = io.read(open);
    print("Opening" + open );
    io.open(open);
