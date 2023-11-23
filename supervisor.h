#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "prisoner.h"

class Supervisor
{
private:
    int prisonersNumber;
    Prisoner* prisoners;
    Light* bulb;

public:
    Supervisor(int newPrisonersNumber);
    void startExperiment();
};

#endif // SUPERVISOR_H
