print("         Welcome!         \n");
print("         commands:        \n");
print("         1 => :w          \n");
print("         2 => :qa!        \n");
print("         3 => :mkdir     \n");
print("         4 => :rmdir     \n");
print("         5 => :prikol     \n");
print("~/   |");
local command;
io.read(command);
if (command == ":w") then
    print("Write the name of file to create :");
    local name;
    io.read(name);
    if (name == ".py") then
        print("Creating python file....");
        file:write(name.py);
    end
    if (name == ".cpp") then 
        print("Creating c++ file    :");
        file:write(name.cpp);
    end 
    for i = 0, 100000 do
        io.read(i);
    end
end
if (command == ":qa!") then
    print("Leave......");
    return 0;
end
if (command == ":prikol") then 
    print("-------------------------\n");
    print("________________________________\n");
    print("++++++++++++++++++++++++++++++++++++++++++++++\n");
end