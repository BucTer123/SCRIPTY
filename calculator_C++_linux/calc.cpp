#include <iostream>
#include <string>
using namespace std;

int main() {
    float a;
    float b;
    string command;
    cout<<"Добро Пожаловать!\n";
    cout<<"Напишите первое число!";
    cin>>a;
    cout<<"Напишите второе число!";
    cin>>b;
    cout<<"Напишите команду или напишите help :";
    cin>>command;
    if (command == "help") {
        cout<<"+\n";
        cout<<"-\n";
        cout<<"*\n";
        cout<<"/\n";
        cout<<"exit\n";
        cout<<"clear\n";
        cout<<"help";
    }
    if (command == "+") {
        cout<< a + b << endl;
    }
    if (command == "-") {
        cout<<a - b<<endl;
    }
    if (command == "*") {
        cout<<a * b<<endl;
    }
    if (command == "/") {
        if (b == 0) {
            cout<<"ERROR!:";
        } else {
            cout<<a / b<<endl;
        }
    }
    if (command == "exit") {
        cout<<"Shutdown!";
        return 0;
    }
    if (command == "clear") {
        cout<<"Cleared!";
        return 0;
    }
}
