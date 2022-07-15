#include <iostream>
#include <vector>
#include "ship.hpp"

using namespace std;

void startGame();
void mainChoice();
void showAllShip(vector<Ship> vecShip);
void newShip(vector<Ship>* vecShip);
void unknowShip(vector<Ship>* vecShip);
void sampleShip(vector<Ship>* vecShip);
vector<Ship> removeShip(vector<Ship> vecShip);
vector<Ship> addPerson(vector<Ship> vecShip);
vector<Ship> deletePerson(vector<Ship> vecShip);

int main() {
    int choice;
    vector<Ship> vecShip;

    startGame();
    mainChoice();
    while (cin >> choice) {
        // system("clear");
        if (choice == 1) {
            newShip(&vecShip);
        }
        if (choice == 2) {
            vecShip = addPerson(vecShip);
        }
        if (choice == 3) {
            vecShip = deletePerson(vecShip);
        }
        if (choice == 4) {
            unknowShip(&vecShip);
        }
        if (choice == 5) {
            showAllShip(vecShip);
        }
        if (choice == 6) {
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
    cout << "Enter a number 2 to add a person\n";
    cout << "Enter a number 3 to delete a person\n";
    cout << "Enter a number 4 to create an unknow ship\n";
    cout << "Enter a number 5 to show alle ship\n";
    cout << "Enter a number 6 to remove to ship\n";
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

    cout << "Added a new ship\n";
}

void unknowShip(vector<Ship>* vecShip) {
    vector<Ship>* ptr = vecShip;
    Ship empty;
    ptr->push_back(empty);

    cout << "Added a unknow ship\n";
}

vector<Ship> removeShip(vector<Ship> vecShip) {
    if (!vecShip.empty()) {
        vecShip.erase(vecShip.end() - 1, vecShip.end());
    } else
        cout << "Ship is empty\n";

    cout << "remove alle ships!\n";
    return vecShip;
}

vector<Ship> addPerson(vector<Ship> vecShip) {
    int numerShip;
    int howManyPeople;

    for (int i = 0; i < vecShip.size(); i++) {
        cout << i + 1 << " : ";
        vecShip[i].showPeople();
        cout << " (Max " << vecShip[i].getMaxCrew() << ")\n";
    }

    cout << "Enter the Ship numer: ";
    cin >> numerShip;
    if (numerShip > vecShip.size()) {
        cout << "There is no such ship!\n";
        return vecShip;
    }
    numerShip--;

    cout << "How many people you want to add: ";
    cin >> howManyPeople;

    if (vecShip[numerShip].getMaxCrew() < vecShip[numerShip].getCrew() + howManyPeople) {
        cout << "There is not that much space";
    } else {
        for (int i = 0; i < howManyPeople; i++) {
            vecShip[numerShip]++;
        }
        cout << "Added " << howManyPeople << " people.\n";
    }

    return vecShip;
}

vector<Ship> deletePerson(vector<Ship> vecShip) {
    int numerShip;
    int howManyPeople;

    for (int i = 0; i < vecShip.size(); i++) {
        cout << i + 1 << " : ";
        vecShip[i].showPeople();
        cout << "\n";
    }

    cout << "Enter the Ship numer: ";
    cin >> numerShip;
    if (numerShip > vecShip.size()) {
        cout << "There is no such ship!\n";
        return vecShip;
    }
    numerShip--;

    cout << "How many people you want to delete: ";
    cin >> howManyPeople;

    if (vecShip[numerShip].getCrew() < howManyPeople) {
        cout << "There is not that much people";
    } else {
        for (int i = 0; i < howManyPeople; i++) {
            vecShip[numerShip]--;
        }
        cout << "delete " << howManyPeople << " people.\n";
    }

    return vecShip;
}

void sampleShip(vector<Ship>* vecShip){
    vector<Ship>* ptr = vecShip;
    
    Ship s1("B0000","Jolo",25,100,10);
    Ship s2("B0001", "Kolo", 21, 100, 10);
    Ship s3("B0002", "Fis", 22, 100, 3);
    Ship s4("B0003", "cola", 21, 200, 15);

    ptr->push_back(s1);
    ptr->push_back(s2);
    ptr->push_back(s3);
    ptr->push_back(s4);
}