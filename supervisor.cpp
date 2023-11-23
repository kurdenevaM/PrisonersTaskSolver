#include "supervisor.h"
#include "defaultbehavior.h"
#include "counterbehavior.h"
#include "math.h"
#include <QDebug>

Supervisor::Supervisor(int newPrisonersNumber)
{
    bulb = new Light();
    bulb->setOn(false);
    prisonersNumber = newPrisonersNumber;
    prisoners = new Prisoner[newPrisonersNumber];
    for (int i = 0; i < newPrisonersNumber; i++)
        prisoners[i] = Prisoner();
}

void Supervisor::startExperiment()
{
    qDebug() << "Experiment start";

    for (int i = 0; i < prisonersNumber; i++)
    {
        prisoners[i].setStrategy(new DefaultBehavior());
    }

    int counterPrisonerNumber = rand()%prisonersNumber;
    prisoners[counterPrisonerNumber].setStrategy(new CounterBehavior(prisonersNumber));
    int currentPrisonerNumber;

    bool isEnd = false;
    while (!isEnd)
    {
        currentPrisonerNumber = rand()%prisonersNumber;
        isEnd = prisoners[currentPrisonerNumber].enterRoom(bulb);
    }

    qDebug() << "Experiment is end";
}
