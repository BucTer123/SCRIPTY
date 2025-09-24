#include "commands.h"
#include "filesystem_utils.h"
#include <filesystem>
#include <iostream>
#include <fstream>
using namespace std;

namespace fs = filesystem;

void cmd_ls() {
    for (const auto& entry : fs::directory_iterator(fs::current_path())) {
        cout << entry.path().filename().string() << endl;
    }
}


void cmd_cd(const string& path) {
    if (cir_exists(path)) {
        current_path = path;
        cout << "Current directory: " << current_path << endl;
    } else {
        cout << "No such file or directory" << endl;
    }
}


void cmd_mkdir(const string& name) {
    if (create_directory(name)) {
        cout << "Created directory " << name << endl;
    } else {
        cout << "No such file or directory" << endl;
    }
}

void cmd_touch(const string& name) {
    ofstream file(name);
    if (file) file.close();
}

void cmd_rm(const string& name) {
    if (file_exists(name) && remove(name)) {
        cout << "Removed file " << name << endl;
    } else {
        cout << "No such file or directory" << endl;
    }
}


void cmd_rmdir(const string& name) {
    if (file_exists(name) && remove(name)) {
        cout << "Removed directory " << name << endl;
    } else {
        cout << "No such file or directory" << endl;
    }
}
