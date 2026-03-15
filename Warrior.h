#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior : public Hero {
private:
    int armorRating;

public:
    Warrior(const string& name, int health, int basePower, int armorRating);
    virtual ~Warrior();
    
    int calculateEffectiveHealth() const;
};

#endif