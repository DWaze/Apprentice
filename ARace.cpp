//
// Created by dredhat on 30/10/2020.
//

#include "ARace.hh"

ARace::ARace(int lifeExpectancy) : _lifeExpectancy(lifeExpectancy) {}

const int & ARace::GetLifeExpectancy() {
    return _lifeExpectancy;
}
