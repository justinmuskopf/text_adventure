#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"

class Weapon : public Item
{
public:
    Weapon();
    QString getStats();
};

#endif // WEAPON_H
