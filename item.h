#ifndef ITEM_H
#define ITEM_H
#include <QVector>
#include <QString>
class Item
{
public:
    Item();

    QString getStats();
    QString getName();
    QString getDescription();
protected:
    void setDescription(QString _description);
    void setName(QString _name);
private:
    QString name;
    QString description;
};

typedef QVector<Item *> ItemVector;

#endif // ITEM_H
