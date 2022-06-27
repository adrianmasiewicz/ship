#include "ship.hpp"
#include <iostream>

Ship::Ship(string id, string name, int speed, int maxCrew, int capacity)
        : id_(id), 
        name_(name), 
        speed_(speed), 
        maxCrew_(maxCrew), 
        capacity_(capacity) 
{}

Ship::Ship () : Ship("no_ID", "no name", -1,-1,-1) {}

Ship:: Ship(string id, int speed, int maxCrew) 
        : id_(id)
        , name_("no name")
        , speed_(speed)
        , maxCrew_(maxCrew)
        , capacity_ (-1)
        {}

void Ship::setName(string name) 
{
    name_ = name; 
}

string Ship::getId() const { return id_; }
string Ship::getName() const { return name_; }
int Ship::getSpeed() const { return speed_; }
int Ship::getMaxCrew() const { return maxCrew_; }
int Ship::getCapacity() const { return capacity_; }