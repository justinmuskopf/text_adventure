#include "person.h"

Person::Person()
{

}

QString Person::getName()
{
    return name;
}

void Person::setName(QString _name)
{
    name = _name;
}

int Person::getlevel()
{
    return level;
}

void Person::setLevel(int _level)
{
    if (_level < 1)
        _level = 1;

    level = _level;
}

int Person::getHealth()
{
    return health;
}

void Person::setHealth(int _health)
{
    health = _health;
    if (health <= 0)
    {
        health = 0;
        alive = false;
    }
    // Health is above 0, and the person is currently dead
    else if (!alive)
    {
        alive = true;
    }

    emit healthChanged(health);
}

void Person::setMaxHealth(int _maxHealth)
{
    maxHealth = _maxHealth;

    emit maxHealthChanged(maxHealth);
}

int Person::getMaxHealth()
{
    return maxHealth;
}

void Person::updateHealth(int change)
{
    setHealth(health + change);
}

void Person::updateMaxHealth(int change)
{
    setMaxHealth(health + change);
}

bool Person::isAlive()
{
    return alive;
}

bool Person::isDead()
{
    return !alive;
}
