//
// Created by dredhat on 30/10/2020.
//

#include "Elf.hh"

void Elf::SpecialTrait() {
    cout << "I'm a somewhat intelligent Elf!";
}

const string &Elf::GetRaceName() {
    return "Elf";
}

const int &Elf::GetLifeExpectancy() {
    return 200;
}
