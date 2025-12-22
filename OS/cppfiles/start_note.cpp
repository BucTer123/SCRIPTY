#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void startnote() {
        cout<<"Welcome to the note!\n";
        cout<<"Write now! Youre welcome!";
        vector<string> lines;
        string line;
        for (int i = 0; i<100000; i++) {
            getline(cin, line);
        }
        string bb = line;
        if (bb == ":wq") {
            cout<<"Save and exit";
            ofstream(save);
            exit(0);
        }
        if (bb == ":qa!") {
            exit(0);
        }
        if (bb == "w") {
            cout<<"Write the name of file to create     :";
            string w;
            cin>>w;
            if (w == ".py") {
                cout<<"Creating python file.......\n";
                ofstream("name.py");
            }
            while (w == ".php") {
                ofstream("name.php");
            }
            while (w == ".cs") {
                cout<<"Creating c++ file.....\n";
                ofstream("name.cpp");
            }
            while (w == ".lua") {
                cout<<"Creating lua file.....\n";
                ofstream("name.lua");
            }
        }
}