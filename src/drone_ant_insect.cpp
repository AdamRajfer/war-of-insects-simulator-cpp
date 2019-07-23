#include "drone_ant_insect.h"

drone_ant_insect::drone_ant_insect(group* familyGr) :
    insect(familyGr, 5000, 10, 29),
    drone_insect(familyGr, 5000, 10, 29, 800),
    ant_insect(familyGr, 5000, 10, 29)
{

}

void drone_ant_insect::bornInsect()
{
    group* soldierGroup = getFamilyGroup()->getFamilyColony()->getGroup("soldier");
    soldierGroup->addInsect(new soldier_ant_insect(soldierGroup));
}
