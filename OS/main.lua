print("         Welcome to the pseudo os!       \n");
print("         Write the command or write 'help'       \n");
command = io.read();
if (command == "help") then 
    print("         The list of commands            ");
    print("                 1 <-> help\n");
    print("                 2 <-> exit\n");
    print("                 3 <-> mkdir\n");
    print("                 4 <-> rmdir\n");
    print("                 5 <-> cf <---create_file\n");
    print("                 6 <-> rm -rf\n");
end
if (command == "exit") then
    os.exit(0);
end
if (command == "mkdir") then 
    io.write("File");
end
if (command == "rmdir") then 
    io.close("File");
end
if (command == "cf") then 
    file:Write("Dir");
end 
if (command  == "rm -rf") then 
    file:close("Dir");
end
