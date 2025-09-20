#include "user.h"
#include <iostream>
#include <string>
using namespace std;

bool login(User& user) {
    string name, pass;
    cout << "USERNAME :";
    cin >> name;
    cout << "PASSWORD :";
    cin >> pass;
    cin.ignore();


    if (name == "root" && pass == "1488") {
        user.setUsername("root");
        user.setRoot(true);
    } else if (name == "guest") {
        user.setUsername("guest");
        user.setRoot(false);
    } else {
        cout << "INVALID CREDENTIALS. \n";
        return false;
    }

    return true;

}