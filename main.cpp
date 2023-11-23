#include <QCoreApplication>
#include "supervisor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int prisonersNumber = 51;
    Supervisor supervisor = Supervisor(prisonersNumber);
    supervisor.startExperiment();

    return a.exec();
}
