#include "prisoner.h"

void Prisoner::setStrategy(IPrisonerStrategy *newStrategy)
{
    strategy = newStrategy;
}

bool Prisoner::enterRoom(Light *light)
{
    return strategy->doPrisonerBehavior(light);
}
