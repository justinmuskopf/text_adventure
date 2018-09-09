#include "gamesession.h"
#include <QDebug>

GameSession::GameSession()
{
    player = new Player;
    connect(player, SIGNAL(healthChanged(int)),    this, SLOT(on_playerHealthChanged(int)));
    connect(player, SIGNAL(maxHealthChanged(int)), this, SLOT(on_playerMaxHealthChanged(int)));
    connect(player, SIGNAL(manaChanged(int)),      this, SLOT(on_playerManaChanged(int)));
    connect(player, SIGNAL(maxManaChanged(int)),   this, SLOT(on_playerMaxManaChanged(int)));
}

void GameSession::on_playerHealthChanged(int value)
{
    qDebug() << "Called!" << player -> getName();
    emit playerHealthChanged(value);
}

void GameSession::on_playerMaxHealthChanged(int value)
{
    emit playerMaxHealthChanged(value);
}

void GameSession::on_playerManaChanged(int value)
{
    emit playerManaChanged(value);
}

void GameSession::on_playerMaxManaChanged(int value)
{
    emit playerMaxManaChanged(value);
}

void GameSession::init()
{
    player -> setMaxHealth(200);
    player -> setHealth(100);
    player -> setMaxMana(200);
    player -> setMana(100);
    emit textReady("Hello, this is a test of the print system.");
}
