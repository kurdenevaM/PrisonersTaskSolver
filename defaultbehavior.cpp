#include "defaultbehavior.h"

DefaultBehavior::DefaultBehavior()
{
    isLit = false;
}

bool DefaultBehavior::doPrisonerBehavior(Light *light)
{
    if(!isLit && !(light->getOn()))
    {
        light->setOn(true);
        isLit = true;
    }
    return false;
}
