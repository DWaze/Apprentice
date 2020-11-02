#ifndef APPRENTICE_APPRENTICE_H
#define APPRENTICE_APPRENTICE_H
#include <memory>

using std::unique_ptr;


class Apprentice {
public:
    int _yearsOfStudy;
    bool _isLying;
    explicit Apprentice()
    {
        _yearsOfStudy = 42;
        _isLying = true;
    };
    ~Apprentice();
    void tellYearsOfStudy() const;
    bool getIsLying() const;
    float getMana() const;
    void setMana(float _mana);
    void beginLearning(int yearsOfStudy=0, bool isLying=false);
    void bragTo(Apprentice *appr);
    int* learnLessons(int nbLessons, const int *lessons);

private:
    float _mana{};
    int* _lessons;
};


#endif //APPRENTICE_APPRENTICE_H
