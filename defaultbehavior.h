#ifndef DEFAULTBEHAVIOR_H
#define DEFAULTBEHAVIOR_H

#include "iprisonerstrategy.h"

class DefaultBehavior : public IPrisonerStrategy
{
private:
    bool isLit;

public:
    DefaultBehavior();
    bool doPrisonerBehavior(Light* light);
};


#endif // DEFAULTBEHAVIOR_H
