#ifndef IPRISONERSTRATEGY_H
#define IPRISONERSTRATEGY_H

#include "light.h"

class IPrisonerStrategy
{
public:
    virtual bool doPrisonerBehavior(Light* light) = 0;
};

#endif // IPRISONERSTRATEGY_H
