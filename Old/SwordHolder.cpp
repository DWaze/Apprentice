//
// Created by dredhat on 28/10/2020.
//

#include <iostream>
#include "SwordHolder.hh"

SwordHolder::SwordHolder(const vector<Sword>& swords) {
    cout << swords.size();
}

vector<Sword> SwordHolder::getSwords() const {
    return this->swords;
}
