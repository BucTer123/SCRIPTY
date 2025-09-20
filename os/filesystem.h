#pragma once
#include <string>
#include <vector>
using namespace std;


struct File {
    string name;
    bool isDir;

};


class FileSystem {
    vector<File> files;
    string currentDir;
public:
    FileSystem();
    void list();
    void mkdir (const string& name);
    void remove(const string& name);
    void cd (const string& name);
    string getDir() const {return currentDir; }
};