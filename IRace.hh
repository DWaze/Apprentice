//
// Created by dredhat on 30/10/2020.
//

#ifndef APPRENTICE_IRACE_HH
#define APPRENTICE_IRACE_HH
#include <iostream>

using namespace std;

class IRace {
public:
    virtual const string& GetRaceName() = 0;
    virtual const int& GetLifeExpectancy() = 0;
    virtual void SpecialTrait() = 0;
};


#endif //APPRENTICE_IRACE_HH
