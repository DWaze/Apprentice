//
// Created by dredhat on 28/10/2020.
//

#include "Sword.hh"
#include <iostream>

using namespace std;

Sword::Sword(int length) : _length(length) {
    cout << "Creating a simple sword\n";
}

void Sword::BreakSword() {
    cout << "Clung\n";
}

Sword::~Sword() {
    BreakSword();
    cout << "The sword is broken\n";
}

int Sword::getLength() const {
    return _length;
}
