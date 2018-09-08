#ifndef PERSON_H
#define PERSON_H
#include <QObject>
#include <QString>
#include "item.h"
#include "inventory.h"

class Person : public QObject
{
    Q_OBJECT
public:
    Person();

    QString getName();
    int getlevel();
    int getHealth();
    int getMaxHealth();

    void setName(QString _name);
    void setLevel(int _level);

    void updateHealth(int change);
    void updateMaxHealth(int change);

    bool isAlive();
    bool isDead();
public slots:
    void setHealth(int _health);
    void setMaxHealth(int _maxHealth);
signals:
    void healthChanged(int value);
    void maxHealthChanged(int value);
private:
    QString name;
    bool alive;
    int level;

    int health;
    int maxHealth;
};

#endif // PERSON_H
