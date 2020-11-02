//
// Created by dredhat on 28/10/2020.
//

#include "Caledfwlch.hh"
#include <iostream>

using namespace std;

Caledfwlch::Caledfwlch(int length, bool isLegendary) : Sword(length), LegendaryItem() {
    cout << "Creating THE sword: Caledfwlch!\n";
}

Caledfwlch::~Caledfwlch() {
    cout << "It can't be! ...\n";
}

void Caledfwlch::IncreaseLength(int addLength) {
    this->_length += addLength;
}
