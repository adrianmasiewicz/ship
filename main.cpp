#include <iostream>
#include <vector>
#include "ship.hpp"

using namespace std;

void startGame();
void mainChoice();
void showAllShip(vector<Ship> vecShip);
Ship newShip();

int main() {
    int choice;
    vector<Ship> vecShip;
    vecShip.push_back(Ship("WR02", "First", 90, 99, 92));

    startGame();
    mainChoice();
    while (cin >> choice) {
        
        

        if (choice == 1) {
            vector<Ship> * ptr = &vecShip;
            Ship s = newShip();
            ptr->push_back(s);
        }
        if (choice == 2) {
            showAllShip(vecShip);
        }
        cout << "***************************"<<endl;
        
        
        
        mainChoice();
    }
}

void startGame() {
    system("clear");
    cout << "Welcome to the game Ship! " << endl;
    cout << "Enter a number to play or a character 'q' to exit: ";
}

Ship newShip() {
    string id;
    string name;
    int speed;
    int maxCrew;
    int capacity;

    cout << "Give me ID: ";
    cin >> id;
    cout << "Give me Name: ";
    cin >> name;
    cout << "Give me max speed: ";
    cin >> speed;
    cout << "Give me max crew: ";
    cin >> maxCrew;
    cout << "Give me a capacity your ship: ";
    cin >> capacity;

    Ship newShip(id, name, speed, maxCrew, capacity);
    return newShip;
}

void mainChoice() {
    cout << "\n====================================\n";
    cout << "Enter a number 1 to create new ship\n";
    cout << "Enter a number 2 to show alle ship\n";
}

void showAllShip(vector<Ship> vecShip) {
    
    for(int i = 0; i < vecShip.size();i++){
        vecShip[i].showShip();
    }
    
}
