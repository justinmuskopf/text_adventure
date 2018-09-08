#include "statbar.h"
#include <QtDebug>

StatBar::StatBar(QWidget *parent) : QProgressBar(parent)
{
    setTextVisible(true);
    connect(this, SIGNAL(valueChanged()), this, SLOT(updateProgress()));
}

void StatBar::updateProgress(int prog)
{
    qDebug() << "here";
    setFormat(QString::number(prog) + " / " + QString::number(maximum()));
}
