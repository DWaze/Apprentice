//
// Created by dredhat on 28/10/2020.
//

#ifndef APPRENTICE_SWORDHOLDER_HH
#define APPRENTICE_SWORDHOLDER_HH
#include "Sword.hh"
#include <vector>

using namespace std;

class SwordHolder {
public:
    vector<Sword> swords;
    explicit SwordHolder(const vector<Sword>& swords);
    vector<Sword> getSwords() const;
};


#endif //APPRENTICE_SWORDHOLDER_HH
