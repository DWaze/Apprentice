#ifndef APPRENTICE_CALEDFWLCH_HH
#define APPRENTICE_CALEDFWLCH_HH
#include "Sword.hh"
#include "LegendaryItem.hh"

class Caledfwlch: public Sword, public LegendaryItem {
public:
    Caledfwlch(int length, bool isLegendary);
    ~Caledfwlch() override;
    void IncreaseLength(int addLength);
};


#endif //APPRENTICE_CALEDFWLCH_HH
