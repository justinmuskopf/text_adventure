#include "item.h"

Item::Item()
{

}


void Item::setName(QString _name)
{
    name = _name;
}

QString Item::getName()
{
    return name;
}


void Item::setDescription(QString _description)
{
    description = _description;
}

QString Item::getDescription()
{
    return description;
}
