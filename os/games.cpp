#include "games.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void cmd_guess() {
    srand(time(nullptr));
    int number = rand() % 10 + 1;
    int guess;
    cout << "GUESS A NUMBER (1-10): ";
    cin >> guess;
    cin.ignore();
    if (guess == number) cout << "CORRECT!\n";
    else cout << "WRONG ITS" << number << "\n";
}

void cmd_dice() {
    srand(time(nullptr));
    cout << "YOU ROLLED A " << (rand()%6+1) << "\n";
}

void cmd_rps() {
    string choice;
    cout << "CHOOSE (rock/papre/scisors): ";
    cin >> choice;
    cin.ignore();
    string option[3] = {"rock", "papre", "scisors"};
    srand(time(nullptr));
    string com = optinons[rand()%3];
    cout << "cumputer choice:" << comp << "\n";
    if (choice == comp) cout << "DRAW!\n";
    else if ((choice=="rock" && comp=="scisors")
            || (choice=="papre" && comp=="scisors")
            || (choice=="scisors" && comp=="rock")
            || (choice=="rock" && comp=="papre")
            || (choice=="papre" && comp=="scisors")
            || (choice=="scisors" && comp=="rock")
            || (choice=="scisors" && comp=="papre")
            || (choice=="papre" && comp=="scisors")
            || (choice=="scisors" && comp=="rock")
            || (choice=="scisors" && comp=="papre"))
        cout << "YOU WIN\n";
    else cout << "LOSE\n";
}