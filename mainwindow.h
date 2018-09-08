#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include "gamesession.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_playerHealthChanged(int value);
    void on_playerMaxHealthChanged(int value);
    void on_playerManaChanged(int value);
    void on_playerMaxManaChanged(int value);
private slots:
    void on_healthBar_valueChanged(int value);
    void on_manaBar_valueChanged(int value);
    void on_xpBar_valueChanged(int value);
private:
    Ui::MainWindow *ui;
    QProgressBar *healthBar;
    QProgressBar *manaBar;
    QProgressBar *xpBar;
    GameSession *game;

    void updateStatusBar(QProgressBar *bar, int value);

};

#endif // MAINWINDOW_H
