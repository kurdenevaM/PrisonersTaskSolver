#ifndef PRISONER_H
#define PRISONER_H

#include "iprisonerstrategy.h"

class Prisoner
{
private:
    IPrisonerStrategy* strategy;

public:
    void setStrategy(IPrisonerStrategy* newStrategy);
    bool enterRoom(Light* light);
};

#endif // PRISONER_H
