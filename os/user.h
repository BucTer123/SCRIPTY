#pragma once
#include <string>
using namespace std;

class User {
    string username;
    bool isRoot;
public:
    User() : username("guest"), isRoot(false) {}
    void setUsername(const string name ) { username = name; }
    string getUsername() const { return username; }
    void setRoot(bool val) { isRoot = val; }
    bool getRoot() const { return isRoot; }
    string getPrompt() const { return username + (isRoot ? "# " : "$ ");}
};


bool login(User& user);