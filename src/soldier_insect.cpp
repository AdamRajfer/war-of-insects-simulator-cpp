#include "soldier_insect.h"

soldier_insect::soldier_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad, int attac) :
    insect(familyGr, insHealth, goingRad, battleArrayRad),
    attack(attac)
{
    addGroupsToAct();
    setVirtualTargetColony();
}

void soldier_insect::actTheInsect()
{
    insect* tarIns = getTargetInsect();
    tarIns->changeInsectHealth(-attack);
    if (tarIns->getInsectHealth() <= 0)
    {
        delete tarIns;
    }
}

void soldier_insect::setVirtualTargetColony()
{
    insect::setTargetColony(getFamilyGroup()->getFamilyColony()->getEnemyColony());
}

void soldier_insect::addGroupsToAct()
{
    addGroupToAct("queen");
    addGroupToAct("drone");
    addGroupToAct("soldier");
    addGroupToAct("worker");
}

int soldier_insect::getAttack()
{
    return attack;
}
