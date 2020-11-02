//
// Created by dredhat on 30/10/2020.
//

#ifndef APPRENTICE_VAMPIRE_HH
#define APPRENTICE_VAMPIRE_HH


#include "AHuman.hh"

class Vampire : public AHuman {
public:
    const string &GetRaceName() override;

    void SpecialTrait() override;

    const int &GetLifeExpectancy() override;
};


#endif //APPRENTICE_VAMPIRE_HH
