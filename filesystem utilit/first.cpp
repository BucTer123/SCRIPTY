#include <iostream>
#include <string>
#include "commands.h"

int main() {
    std::string command, arg;

    while (true) {
        std::cout << std::filesystem::current_path() << " > ";
        std::cin >> command;

        if (command == "exit") break;
        else if (command == "ls") cmd_ls();
        else if (command == "cd") {
            std::cin >> arg;
            cmd_cd(arg);
        }
        else if (command == "mkdir") {
            std::cin >> arg;
            cmd_mkdir(arg);
        }
        else if (command == "touch") {
            std::cin >> arg;
            cmd_touch(arg);
        }
        else if (command == "rm") {
            std::cin >> arg;
            cmd_rm(arg);
        }
        else if (command == "rmdir") {
            std::cin >> arg;
            cmd_rmdir(arg);
        }
        else {
            std::cout << "Unknown command!" << std::endl;
        }
    }

    return 0;
}
