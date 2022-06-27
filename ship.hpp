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
    Ship ();
    Ship(string id, string name, int speed, int maxCrew, int capacity);

    Ship(string id, int speed, int maxCrew);

    void setName(string);

    string getId() const { return id_; }
    string getName() const { return name_; }
    int getSpeed() const { return speed_; }
    int getMaxCrew() const { return maxCrew_; }
    int getCapacity() const { return capacity_; }
};