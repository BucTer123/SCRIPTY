#include "calc.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void runCalculator() {
    cout << "CALCULATOR TYPE 'EXIT' TO lEAVE.\n ";
    string input;
    while (true) {
        cout << "CALC ";
        getline(cin, input);
        if (input == "exit")  break;


        stringstream ss(input);
        double a, b; char op;
        if (ss >> a >> op >> b) {
            switch (op) {
                case '+': cout << (a + b) << "\n"; break;
                case '-': cout << (a - b) << "\n"; break;
                case '*': cout << (a * b) << "\n"; break;
                case '/': if (b!=0) cout << (a/b) << "\n"; else cout << "DIV BY ZERO\n"; break;
                default: cout << "UNKNOWN OPERATOR.\n";
            }
        } else {
            cout << "VALID EXPRESSION.\n";
        }
    }
}