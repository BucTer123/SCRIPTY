#include "netwok.h"
#include <iostream>
using namespace std;

void cmd_ping(const string& host) {
    cout << "PING:" << host <<" .....SUCESSS1\n";
}

void cmd_curl(const string& url) {
    cout << "DOWNLOAD" << url << "...DONE\n";
}


void cmd_ipconfig() {
    cout << "IF ADRESS: FUCK YOU!\n";
    cout << "GATEWAY: 2022.2402.03dni\n";
}

void cmd_netstat() {
    cout << "ACTIVE CONECTION\n";
    cout << "GATEWAY\n";
}