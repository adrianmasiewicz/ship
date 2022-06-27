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
    Ship(const string id, const string name, int speed, int maxCrew, int capacity);
    Ship(const string id, int speed, int maxCrew);

    void setName(string);

    string getId() const;
    string getName() const;
    int getSpeed() const;
    int getMaxCrew() const;
    int getCapacity() const;


};