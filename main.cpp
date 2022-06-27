#include <iostream>
#include "ship.hpp"

using namespace std;


void showShip(Ship* s);

int main() {
    Ship new34("new34", "Stephan", 56, 20, 2000);
    Ship new43;
    Ship new77("new77",80,6);

    showShip(&new34);
    cout << endl;
    showShip(&new43);
    cout << endl;
    showShip(&new77);
}

void showShip(Ship* s) {
    static int number = 1;
    cout << "Ship number: "<<number++<<"\n";
    cout << s->getId() <<" Name: " << s->getName() << "\n";
    cout << s->getId() <<" Speed: " << s->getSpeed() << "km/h\n";
    cout << s->getId() <<" max crew: " << s->getMaxCrew() << " People\n";
    cout << s->getId() <<" capacity: " << s->getCapacity() << " kg\n";
}
