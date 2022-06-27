#include <iostream>
#include <vector>
#include "ship.hpp"

using namespace std;

void startGame();
void mainChoice();
void showAllShip(vector<Ship> vecShip);
void newShip(vector<Ship> *vecShip);

int main() {
    int choice;
    vector<Ship> vecShip;

    startGame();
    mainChoice();
    while (cin >> choice) {
        system("clear");
        if (choice == 1) {
            newShip(&vecShip);
        }

        if (choice == 2) {
            showAllShip(vecShip);
        }
        
        mainChoice();
    }
}

void startGame() {
    system("clear");
    cout << "Welcome to the game Ship! " << endl;
    cout << "Enter a number to play or a character 'q' to exit: ";
}

void mainChoice() {
    cout << "\n====================================\n";
    cout << "Enter a number 1 to create new ship\n";
    cout << "Enter a number 2 to show alle ship\n";
}

void showAllShip(vector<Ship> vecShip) {
    if (vecShip.empty()) {
        cout << "There are no ships.\n";
    }

    for (int i = 0; i < vecShip.size(); i++) {
        vecShip[i].showShip();
        cout << endl;
    }
    
}

void newShip(vector<Ship> *vecShip) {
    static string temporary_id = "W0000";
    temporary_id[4]++;
    vector<Ship>* ptr = vecShip;
    Ship s(temporary_id);
    ptr->push_back(s);
}