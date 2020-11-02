//
// Created by dredhat on 27/10/2020.
//
#include <iostream>
#include "Apprentice.h"

using namespace std;

void Apprentice::tellYearsOfStudy() const {
    cout << "I've been practicing magic for " << _yearsOfStudy << " years!\n\n";
}

bool Apprentice::getIsLying() const {
    return _isLying;
}

float Apprentice::getMana() const {
    return _mana;
}

void Apprentice::setMana(float mana) {
    if(mana >=0 and mana<=0){
        _mana = mana;
    }
}

void Apprentice::beginLearning(int yearsOfStudy, bool isLying) {
    this->_yearsOfStudy = yearsOfStudy;
    this->_isLying = isLying;
}

void Apprentice::bragTo(Apprentice *appr) {
    if(appr->_yearsOfStudy==0){
        cout << "You know nothing!";
    }else if(appr->_yearsOfStudy < 2){
        cout << "I'm simply better than you ...";
    }else if(appr->_yearsOfStudy >= 2){
        cout << "It's just a matter of time before I best you ...";
    }
}

Apprentice::~Apprentice() {
    cout << "All those years for nothing!?";
}

int* Apprentice::learnLessons(int nbLessons, const int *lessons) {
    _lessons = new int[nbLessons];
    unique_ptr<int> _lessons2 (_lessons);

    for(int i=0; i<nbLessons; i++){
        *(_lessons+i) = *(lessons+i);
    }
    return _lessons;
}
