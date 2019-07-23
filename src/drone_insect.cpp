#include "drone_insect.h"

drone_insect::drone_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad, int regenerTime) :
    insect(familyGr, insHealth, goingRad, battleArrayRad),
    regenerationTime(regenerTime),
    passedTime(regenerTime)
{
    addGroupsToAct();
    setVirtualTargetColony();
}

void drone_insect::actTheInsect()
{
    if (passedTime == 0)
    {
        bornInsect();
        passedTime = regenerationTime;
        stopActing();
    }
    else
    {
        passedTime--;
    }
}

void drone_insect::addGroupsToAct()
{
    addGroupToAct("queen");
}

void drone_insect::setVirtualTargetColony()
{
    insect::setTargetColony(getFamilyGroup()->getFamilyColony());
}

int drone_insect::getPassedTime()
{
    return passedTime;
}

int drone_insect::getRegenerationTime()
{
    return regenerationTime;
}
