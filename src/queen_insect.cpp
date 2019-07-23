#include "queen_insect.h"

queen_insect::queen_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad) :
    insect(familyGr, insHealth, goingRad, battleArrayRad)
{
    addGroupsToAct();
    setVirtualTargetColony();
}

void queen_insect::actTheInsect()
{

}

void queen_insect::setVirtualTargetColony()
{
    insect::setTargetColony(getFamilyGroup()->getFamilyColony());
}

void queen_insect::addGroupsToAct()
{
    addGroupToAct("drone");
}
