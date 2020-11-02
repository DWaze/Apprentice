//
// Created by dredhat on 30/10/2020.
//

#include "Vampire.hh"

const string &Vampire::GetRaceName() {
    return "Vampire";
}

void Vampire::SpecialTrait() {
    cout << "So much light!";
}

const int &Vampire::GetLifeExpectancy() {
    return 150;
}
