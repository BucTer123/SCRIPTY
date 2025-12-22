#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void calc() {
    cout<<"Welcome to calculator !\n";
    string calc;
    float a, b;
    cout<<"Write the first number   :";
    cin>>a;
    cout<<"Write the second number  :";
    cin>>b;
    cout<<"Write the command or write 'calc_help'   :";
    cin>>calc;
    if (calc == "calc_help") {
        cout<<"List of commands in calculator :\n";
        cout<<"  1 = plus(+)\n";
        cout<<"  2 = minus(-)\n";
        cout<<"  3 = multiply(*)\n";
        cout<<"  4 = divide(/)\n";
        cout<<"  5 = sinus(sin)\n";
        cout<<"  6 = cosinus(cos)\n";
        cout<<"  7 = calc_help\n";
        cout<<"  8 = calc_exit\n";
        cout<<"  9 = tangens(tan)\n";
    }
    if (calc == "plus" || calc == "+") {
        cout<<"Answer is :"<<a + b<<endl;
    }
    if (calc == "minus" || calc == "-") {
        cout<<"Answer is :"<<a - b<<endl;
    }
    if (calc == "multiply" || calc == "*") {
        cout<<"Answer is :"<<a * b<<endl;
    }
    if (calc == "divide" || calc == "/") {
        if (b == 0) {
            cout<<"ERROR!: Divide by zero! don't divide any number on zero!";
        } else {
            cout<<"Answer is  :"<<a / b<<endl;
        }
    }
    if (calc == "sinus" || calc ==  "sin") {
        cout<<"Answer is :"<<sin(a);
        cout<<"Answer is :"<<sin(b);
        cout<<a<<b<<endl;
    }
    if (calc == "cosinus" || calc == "cos") {
        cout<<"Answer is :"<<cos(a);
        cout<<"Answer is :"<<cos(b);
        cout<<a<<b<<endl;
    }
    if (calc == "calc_exit") {
        cout<<"Shutdown";
         exit(0);
    }
    if (calc == "tangens" || calc == "tan") {
        cout<<"Answer is : "<<tan(a);
        cout<<"Answer is : "<<tan(b);
        cout<<a<<b<<endl;
    }
}