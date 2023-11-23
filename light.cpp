#include "light.h"

void Light::setOn(bool newLightCondition)
{
    isOn = newLightCondition;
}

bool Light::getOn()
{
    return isOn;
}
