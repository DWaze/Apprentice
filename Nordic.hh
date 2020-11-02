//
// Created by dredhat on 30/10/2020.
//

#ifndef APPRENTICE_NORDIC_HH
#define APPRENTICE_NORDIC_HH


#include "AHuman.hh"

class Nordic: public AHuman{
public:
    const string &GetRaceName() override;

    void SpecialTrait() override;

    const int &GetLifeExpectancy() override;
};


#endif //APPRENTICE_NORDIC_HH
