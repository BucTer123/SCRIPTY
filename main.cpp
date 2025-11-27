#include <iostream>
#include <string>
#include <filesystem>
using namespace std;
using namespace filesystem;

int main() {
    cout<<"Choice the command";
    string command;
    cin>>command;
    if (command == "help") {
        cout<<"1    mkdir\n";
        cout<<"2    mkdir_all\n";
        cout<<"3    remove\n";
        cout<<"4    remove_all\n";
        cout<<"5    rename\n";
        cout<<"6    copy_file\n";
        cout<<"7    exit\n";
        cout<<"8    help";
    }
    else if (command == "mkdir") {
        string name_file;
        float RAM;
        cout<<"Enter the name of the file you want to create";
        cin>>name_file;
        create_directory(name_file);
        cout<<"Created file "<<name_file<<endl;
        RAM = 13000;
        cout<<"Used ram : "<<RAM<<endl;
    }
    else if (command == "mkdir_all") {
        string name_files;
        float RAM;
        cout<<"Enter the name of the file you want to create";
        cin>>name_files;
        create_directories(name_files);
        cout<<"Created file "<<name_files<<endl;
        RAM = 13000;
        cout<<"Used ram : "<<RAM<<endl;
    }
    else if (command == "remove") {
        string name_file;
        float RAM;
        cout<<"Enter the name of the file you want to remove";
        cin>>name_file;
        remove(name_file);
        cout<<"Deleted file "<<name_file<<endl;
        RAM = 13000;
        cout<<"Used ram : "<<RAM<<endl;
    }
    else if (command == "remove_all") {
        string name_files;
        float RAM;
        cout<<"Enter the name of the file you want to remove";
        cin>>name_files;
        remove_all(name_files);
        cout<<"Deleted files "<<name_files<<endl;
        RAM = 13000;
        cout<<"Used ram : "<<RAM<<endl;
    }
    else if (command == "rename") {
        string name_renames;
        float RAM;
        cout<<"Enter the name of the file you want to rename";
        cin>>name_renames;
        cout<<"Rename :"<<name_renames<<endl;
        RAM = 13000;
        cout<<"Used ram : "<<RAM<<endl;
    }
    else if (command == "copy_file") {
        string files;
        float RAM;
        cout<<"Enter the name of the file you want to copy";
        cin>>files;
        copy_file(files,files);
        cout<<"Copied file "<<files<<endl;
        RAM = 13000;
        cout<<"Used ram : "<<RAM<<endl;
    }
    else if (command == "exit") {
        cout<<"Shutdown....";
        return 0;
    }

}