#include "commands.h"
#include "utils.h"
#include "calc.h"
#include "sysinfo.h"
#include "netwok.h"
#include "games.h"
#include <iostream>
#include <sstream>
using namespace std;

bool processCommand(const string& cmd, User& user, FileSystem& fs) {
    stringstream ss(cmd);
    string command;
    ss >> command;


    if (command == "exit") return false;
    else if (command == "clear") { clearScreen(); }
    else if (command == "ls") { fs.list(); }
    else if (command == "mkdir") {
        string name; ss >> name;
        fs.mkdir(name);
    }
    else if (command == "date") { cmd_date(); }
    else if (command == "uptime") { cmd_uptime(); }
    else if (command == "version") { cmd_version(); }
    else if (command == "hostname") { cmd_hostname(); }
    else if (command == "ping") { string host; ss >> host; cmd_ping(host); }
    else if (command == "url") { string url; ss >> url; cmd_curl(url); }
    else if (command == "ipconfig") { cmd_ipconfig(); }
    else if (command == "netstat") { cmd_netstat(); }
    else if (command == "echo") { string text; getline(ss, text); }
    else if (command == "cat") { string f;}
    else if (command == "write") { string f, c; ss >> f; getline(ss, c);}
    else if (command == "edit") { string f; ss >> f; }
    else if (command == "guess") { cmd_guess(); }
    else if (command == "dice") { cmd_dice(); }
    else if (command == "coin") { cmd_coin(); }
    else if (command == "rps") { cmd_rps(); }

    else if (command == "cd") {
        string name; ss >> name;
        fs.cd(name);
    }
    else if (command == "delete") {
        string name; ss >> name;
        fs.remove(name);
    }
    else if (command == "whoami") {
        cout << user.getUsername() << (user.getRoot() ? "(root)\n" : "");
    }
    else if (command == "sudo") {
        if (user.getRoot() ) cout << "Already root\n";
        else {
            string pass;
            cout << "Password: "; cin >> pass; cin.ignore();
            if (pass == "1234") { user.setRoot(true); cout << "You are torr.\n"; }
            else cout << "WRONG PASSWORD.\n";
        }
    }
    else if (command == "sudo") {
        runCalculator();
    }
    else {
        cout << "UNKNOWN COMMAND" << command << "\n";
    }

    return true;
}
