//
// Created by dredhat on 30/10/2020.
//

#ifndef APPRENTICE_ARACE_HH
#define APPRENTICE_ARACE_HH
#include "IRace.hh"

class ARace: public IRace {
public:
    explicit ARace(int lifeExpectancy);

private:
    int _lifeExpectancy;

public:
    const int & GetLifeExpectancy() override;

};


#endif //APPRENTICE_ARACE_HH
