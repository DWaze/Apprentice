//
// Created by dredhat on 30/10/2020.
//

#ifndef APPRENTICE_ELF_HH
#define APPRENTICE_ELF_HH


#include "ARace.hh"

class Elf : public ARace{
public:
    virtual void SpecialTrait() override;

    const string &GetRaceName() override;

    const int &GetLifeExpectancy() override;
};


#endif //APPRENTICE_ELF_HH
