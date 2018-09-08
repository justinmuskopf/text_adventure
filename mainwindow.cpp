#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> mainTextbox -> setText("Hello, World!");

    healthBar = ui -> healthBar;
    manaBar = ui -> manaBar;
    xpBar = ui -> xpBar;

    game = new GameSession;

    connect(game, SIGNAL(playerHealthChanged(int)),    this, SLOT(on_playerHealthChanged(int)));
    connect(game, SIGNAL(playerMaxHealthChanged(int)), this, SLOT(on_playerMaxHealthChanged(int)));
    connect(game, SIGNAL(playerManaChanged(int)),      this, SLOT(on_playerManaChanged(int)));
    connect(game, SIGNAL(playerMaxManaChanged(int)),   this, SLOT(on_playerMaxManaChanged(int)));

    game -> init();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateStatusBar(QProgressBar *bar, int value)
{
    QString val = QString::number(value);
    QString max = QString::number(bar -> maximum());
    bar -> setFormat(val + " / " + max);
}
void MainWindow::on_healthBar_valueChanged(int value) {updateStatusBar(ui -> healthBar, value);}
void MainWindow::on_manaBar_valueChanged(int value)   {updateStatusBar(ui -> manaBar, value);}
void MainWindow::on_xpBar_valueChanged(int value)     {updateStatusBar(ui -> xpBar, value);}

void MainWindow::on_playerHealthChanged(int value) {qDebug() << "Called!";healthBar -> setValue(value);}
void MainWindow::on_playerMaxHealthChanged(int value) {healthBar -> setMaximum(value);}
void MainWindow::on_playerManaChanged(int value) {manaBar -> setValue(value);}
void MainWindow::on_playerMaxManaChanged(int value) {manaBar -> setMaximum(value);}
