#ifndef PLAYER_H
#define PLAYER_H
#include <QObject>
#include "person.h"
#include "inventory.h"

#define MIN_PLAYER_MAX_HEALTH 100
#define MIN_PLAYER_MAX_MANA   100

class Player : public Person
{
    Q_OBJECT
public:
    Player();
    int getMana();
    int getMaxMana();
    void updateMana(int change);
    void updateMaxMana(int change);
public slots:
    void setMana(int _mana);
    void setMaxMana(int _maxMana);
signals:
    void manaChanged(int value);
    void maxManaChanged(int value);
private:
    int mana;
    int maxMana;
    Inventory *inventory;
    Weapon *weapon;
};

#endif // PLAYER_H
