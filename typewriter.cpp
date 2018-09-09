#include "typewriter.h"
#include "windows.h"
#include "time.h"
#include <QDebug>

TypeWriter::TypeWriter()
{
    srand(time(NULL));
}

void TypeWriter::write(QString text, int _speed)
{
    buffer += text;
    speed[0] = TEXT_SPEEDS[_speed][0];
    speed[1] = TEXT_SPEEDS[_speed][1];
}

void TypeWriter::writeToPrompt()
{
    for (int i = 0; i < buffer.length(); i++)
    {
        int sleepTime = (rand() % (speed[1] - speed[0])) + speed[0];
        emit addToPrompt(buffer.at(i));
        Sleep(sleepTime);
        qDebug() << sleepTime;
    }
    buffer.clear();
}

void TypeWriter::process()
{
    while (true)
    {
        if (buffer.isEmpty())
            Sleep(100);
        else
            writeToPrompt();
    }
}
