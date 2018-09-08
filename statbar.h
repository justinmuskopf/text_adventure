#ifndef STATBAR_H
#define STATBAR_H

#include <QWidget>
#include <QProgressBar>

class StatBar : public QProgressBar
{
    Q_OBJECT
public:
    explicit StatBar(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void updateProgress(int prog);
private:

};

#endif // STATBAR_H
