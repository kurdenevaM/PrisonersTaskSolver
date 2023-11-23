#ifndef LIGHT_H
#define LIGHT_H

class Light
{
private:
    bool isOn;

public:
    void setOn(bool newLightCondition);
    bool getOn();
};

#endif // LIGHT_H
