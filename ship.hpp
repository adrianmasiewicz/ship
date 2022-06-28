#pragma once
#include <string>

using namespace std;

class Ship {
    
    string id_;
    string name_;
    int speed_;
    int maxCrew_;
    int capacity_;

public: 
    Ship();
    Ship(string id);
    Ship(string id, string name, int speed, int maxCrew, int capacity);
    Ship(string id, int speed, int maxCrew);

    void setName(string);

    string getId() const;
    string getName() const;
    int getSpeed() const;
    int getMaxCrew() const;
    int getCapacity() const;

    void showShip();
    void showShipShort();
};