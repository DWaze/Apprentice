//
// Created by dredhat on 30/10/2020.
//

#include "Nordic.hh"

const string &Nordic::GetRaceName() {
    return "Nordic";
}

void Nordic::SpecialTrait() {
    cout << "I'm invincible with my magic immunity!";
}

const int &Nordic::GetLifeExpectancy() {
    return 100;
}
