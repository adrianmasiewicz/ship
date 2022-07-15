#pragma once
#include <string>

using namespace std;

class Cargo{
    string name_;
    int amount_;
    int basePrice_;

public:

    Cargo(string name, int amount, int basePrice);
    
    Cargo& operator++();
    Cargo operator++(int);
    Cargo& operator--();
    Cargo operator--(int);
};