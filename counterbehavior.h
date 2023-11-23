#ifndef COUNTERBEHAVIOR_H
#define COUNTERBEHAVIOR_H

#include "iprisonerstrategy.h"

class CounterBehavior : public IPrisonerStrategy
{
private:
    int prisonersNumber;
    int count;

public:
    CounterBehavior(int newPrisonersNumber);
    bool doPrisonerBehavior(Light* light);
};

#endif // COUNTERBEHAVIOR_H
