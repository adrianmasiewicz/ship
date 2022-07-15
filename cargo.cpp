#include "cargo.hpp"
#include <iostream>

Cargo::Cargo(string name, int amount, int basePrice)
    : name_(name),
      amount_(amount),
      basePrice_(basePrice) {}

Cargo& Cargo::operator++() {
    amount_++;
    return *this;
}

Cargo Cargo::operator++(int) {
    Cargo temporary = *this;
    ++*this;
    return temporary;
}

Cargo& Cargo::operator--() {
    amount_--;
    return *this;
}

Cargo Cargo::operator--(int) {
    Cargo temp = *this;
    --*this;
    return temp;
}