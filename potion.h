#ifndef POTION_H
#define POTION_H
#include "item.h"

class Potion : public Item
{
public:
    Potion();
    QString getStats();

};

#endif // POTION_H
