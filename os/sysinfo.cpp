#include "sysinfo.h"
#include <iostream>
#include <ctime>
using namespace std;

static time_t startTime = time(nullptr);

void cmd_date() {
    time_t now = time(nullptr);
    cout << "Current time: " << ctime(&now);
}


void cmd_uptime() {
    time_t now = time(nullptr);
    cout << "Uptime: " << (now - startTime) << " seconds\n";
}


void cmd_version() {
    cout << "PSEUDOOS v2.0.0\n";
}


void cmd_hostname() {
    cout << "HOST: pseudo--machinen\n";
}
