#include "counterbehavior.h"
#include <QDebug>

CounterBehavior::CounterBehavior(int newPrisonersNumber)
{
    prisonersNumber = newPrisonersNumber;
    count = 0;
}

bool CounterBehavior::doPrisonerBehavior(Light* light)
{
    if(light->getOn())
    {
        light->setOn(false);
        count++;
    }

    if(count == prisonersNumber-1)
    {
        qDebug() << "Number of prisoners: " << count+1;
        return true;
    }

    return false;
}
