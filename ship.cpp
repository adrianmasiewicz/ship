#include "ship.hpp"
#include <iostream>

Ship::Ship(string id, string name, int speed, int maxCrew, int capacity)
    : id_(id),
      name_(name),
      speed_(speed),
      maxCrew_(maxCrew),
      capacity_(capacity) {}

Ship::Ship()
    : Ship("no_ID", "no name", -1, -1, -1) {}

Ship::Ship(string id) : id_(id){

    cout << "Give me Name: ";
    cin >> name_;
    cout << "Give me max speed: ";
    cin >> speed_;
    cout << "Give me max crew: ";
    cin >> maxCrew_;
    cout << "Give me a capacity your ship: ";
    cin >> capacity_;
}

Ship::Ship(string id, int speed, int maxCrew)
    : id_(id), name_("no name"), speed_(speed), maxCrew_(maxCrew), capacity_(-1) {}

void Ship::setName(string name) {
    name_ = name;
}

string Ship::getId() const {
    return id_;
}
string Ship::getName() const {
    return name_;
}
int Ship::getSpeed() const {
    return speed_;
}
int Ship::getMaxCrew() const {
    return maxCrew_;
}
int Ship::getCapacity() const {
    return capacity_;
}

void Ship::showShip(){
    cout << name_ << " ID: " << id_ << "\n";
    cout << name_ << " Speed: " << speed_ << "km/h\n";
    cout << name_ << " max crew: " << maxCrew_ << " People\n";
    cout << name_ << " capacity: " << capacity_ << " kg\n";
}