#include "filesystem.h"
#include <iostream>
#include <algorithm>

FileSystem::FileSystem() {
    currentDir = "/";
    files.push_back({"home", true});
    files.push_back({"readme.txt", false});
}

void FileSystem::list() {
    cout << "Contents of " << currentDir << ":\n";
    for (auto& f : files) {
        cout << (f.isDir ? "[DIR]" : "[FILE] ") << f.name << "\n";
    }
}


void FileSystem::mkdir(const std::string& name) {
    files.push_back({name, true});
    cout << "DIrectory '" << name << "created.\n";
}

void FileSystem::remove(const string &name) {
    auto it = remove_if (files.begin(), files.end(),
        [&](const File& f) {return f.name == name; });
    if (it != files.end()) {
        files.erase(it, files.end());
        cout << "REMOVED" << name << "\n";
    } else {
        cout << "NOT FOUND: " << name << "\n";
    }
}

void FileSystem::cd(const string &name) {
    if (name == "..") {
        currentDir = "/";
        return;
    }
    for (auto& f : files) {
        if (f.name == name && f.isDir) {
            currentDir = "/" + name;
            return;
        }
    }
    cout << "No such directory: " << name << "\n";
}


