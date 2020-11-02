//
// Created by dredhat on 28/10/2020.
//

#include "Castle.h"

#include <utility>

int Castle::GetNbTowers() const {
    return _nbTowers;
}

void Castle::SetNbTowers(const int nbTowers) {
    _nbTowers = nbTowers;
}

Castle::Castle(string name) : _name(std::move(name)) {}

const string &Castle::getName() const {
    return _name;
}

void Castle::CloseGates() {
    cout << "Close the gates!";
}

void Castle::CloseGates(int gates) {
    cout << "Close only "<< gates <<" doors";
}

bool Castle::operator==(const Castle &rhs) const {
    return _nbTowers == rhs._nbTowers &&
           _name == rhs._name;
}

bool Castle::operator!=(const Castle &rhs) const {
    return _nbTowers != rhs._nbTowers &&
           _name != rhs._name;
}

bool Castle::operator>(const Castle &rhs) const {
    return _nbTowers > rhs._nbTowers;
}

Castle::Castle(int _nbTowers) {
    this->_nbTowers = _nbTowers;
}
