#include "player.h"

Player::Player()
{

}

int Player::getMana()
{
    return mana;
}

void Player::setMana(int _mana)
{
    if (_mana < 0)
        _mana = 0;

    mana = _mana;

    emit manaChanged(mana);
}

void Player::updateMana(int change)
{
    setMana(mana + change);
}

int Player::getMaxMana()
{
    return maxMana;
}

void Player::updateMaxMana(int change)
{
    setMaxMana(maxMana + change);
}

void Player::setMaxMana(int _maxMana)
{
    if (_maxMana < MIN_PLAYER_MAX_MANA)
        _maxMana = MIN_PLAYER_MAX_MANA;

    maxMana = _maxMana;

    emit maxManaChanged(maxMana);
}
