#include <iostream>
#include <vector>
#include "ship.hpp"

using namespace std;

void startGame();
void mainChoice();
void showAllShip(vector<Ship> vecShip);
void newShip(vector<Ship>* vecShip);
void unknowShip(vector<Ship>* vecShip);
vector<Ship> removeShip(vector<Ship> vecShip);

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
            unknowShip(&vecShip);
        }

        if (choice == 3) {
            showAllShip(vecShip);
        }

        if (choice == 4) {
            vecShip = removeShip(vecShip);
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
    cout << "Enter a number 2 to create an unknow ship\n";
    cout << "Enter a number 3 to show alle ship\n";
    cout << "Enter a number 4 to remove to ship\n";
}

void showAllShip(vector<Ship> vecShip) {
    if (vecShip.empty()) {
        cout << "There are no ships.\n";
    }

    for (int i = 0; i < vecShip.size(); i++) {
        if (vecShip.size() < 4) {
            vecShip[i].showShip();
        } else {
            vecShip[i].showShipShort();
        }
        cout << endl;
    }
}

void newShip(vector<Ship>* vecShip) {
    static string temporary_id = "A0000";
    temporary_id[4]++;
    vector<Ship>* ptr = vecShip;
    Ship s(temporary_id);
    ptr->push_back(s);
}

void unknowShip(vector<Ship>* vecShip) {
    vector<Ship>* ptr = vecShip;
    Ship empty;
    ptr->push_back(empty);
}

vector<Ship> removeShip(vector<Ship> vecShip) {
    if (!vecShip.empty()) {
        vecShip.erase(vecShip.end() - 1, vecShip.end());
    }
    return vecShip;
}
