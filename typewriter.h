#ifndef TYPEWRITER_H
#define TYPEWRITER_H
#include <QTextBrowser>

#define SLOW_TEXT 0
#define MEDI_TEXT 1
#define FAST_TEXT 2
const int TEXT_SPEEDS[][2] = {
    {350, 500},
    {150, 275},
    {20, 100}
};

class TypeWriter : public QObject
{
    Q_OBJECT
public:
    TypeWriter();
public slots:
    void write(QString text, int _speed = MEDI_TEXT);
    void process();
signals:
    void finished();
    void error(QString err);
    void addToPrompt(QChar ch);
private:
    int speed[2];
    QString buffer;
    QTextBrowser *prompter;
    void writeToPrompt();
};

#endif // TYPEWRITER_H
