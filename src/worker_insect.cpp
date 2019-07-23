#include "worker_insect.h"

worker_insect::worker_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad, int cur) :
    insect(familyGr, insHealth, goingRad, battleArrayRad),
    cure(cur)
{
    addGroupsToAct();
    setVirtualTargetColony();
}

void worker_insect::actTheInsect()
{
    insect* targetInsect = getTargetInsect();
    if (targetInsect->getInsectHealth() < targetInsect->getStartInsectHealth())
    {
        targetInsect->changeInsectHealth(cure);
        if (targetInsect->getInsectHealth() > targetInsect->getStartInsectHealth())
        {
            int difference = targetInsect->getInsectHealth() - targetInsect->getStartInsectHealth();
            targetInsect->changeInsectHealth(-difference);
        }
        stopActing();
    }
    else
    {
        stopActing();
    }
}

void worker_insect::setVirtualTargetColony()
{
    insect::setTargetColony(getFamilyGroup()->getFamilyColony());
}

void worker_insect::addGroupsToAct()
{
    addGroupToAct("queen");
    addGroupToAct("drone");
    addGroupToAct("soldier");
}

int worker_insect::getCure()
{
    return cure;
}
