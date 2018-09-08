#ifndef INVENTORY_H
#define INVENTORY_H
#include "weapon.h"
#include "potion.h"
#include "armor.h"

class Inventory
{
public:
    Inventory();
    ItemVector getAll();

private:
    QVector<Weapon *> weapons;
    QVector<Potion *> potions;
    QVector<Armor *>  armors;
    QVector<Item *>   items;
};

#endif // INVENTORY_H
