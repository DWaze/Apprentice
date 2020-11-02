//
// Created by dredhat on 28/10/2020.
//

#ifndef APPRENTICE_CASTLE_H
#define APPRENTICE_CASTLE_H
#include <iostream>

using namespace std;


class Castle {

public:
    explicit Castle(string name);
    explicit Castle(int _nbTowers);
    static void CloseGates();
    static void CloseGates(int gates);

public:
    int GetNbTowers() const;
    void SetNbTowers(int nbTowers);
    const string &getName() const;
    bool operator==(const Castle &rhs) const;
    bool operator!=(const Castle &rhs) const;
    bool operator>(const Castle &rhs) const;

private:
    int _nbTowers = 0;
    const string _name;
};


#endif //APPRENTICE_CASTLE_H
