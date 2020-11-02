//
// Created by dredhat on 28/10/2020.
//

#ifndef APPRENTICE_SWORD_HH
#define APPRENTICE_SWORD_HH


class Sword {

public:
    static void BreakSword();
    explicit Sword(int length);
    virtual ~Sword();

    int getLength() const;

protected:
    int _length;
};
#endif //APPRENTICE_SWORD_HH
