#include <iostream>
#include <string>
#include "user.h"
#include "commands.h"
#include "filesystem.h"
#include "utils.h"
using namespace std;

int main() {
    cout << "==== WELCOME ! ====`\n";

    User currentUser;
    if (!login(currentUser)) return 0;


    std::string input;
    while (true) {
        cout << currentUser.getPrompt();
        std::getline(std::cin, input);
        if (!processCommand(input, currentUser)) break;
    }


    cout << "==== SHUTDOWN! ====\n";
    return 0;
}