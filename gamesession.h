#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "player.h"

class GameSession : public QObject
{
    Q_OBJECT
public:
    GameSession();
    void init();
signals:
    void playerHealthChanged(int value);
    void playerMaxHealthChanged(int value);
    void playerManaChanged(int value);
    void playerMaxManaChanged(int value);
private slots:
    void on_playerHealthChanged(int value);
    void on_playerMaxHealthChanged(int value);
    void on_playerManaChanged(int value);
    void on_playerMaxManaChanged(int value);
private:
    Player *player;
};

#endif // GAMESESSION_H
