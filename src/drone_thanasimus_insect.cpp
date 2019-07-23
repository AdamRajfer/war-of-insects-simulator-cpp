#include "drone_thanasimus_insect.h"

drone_thanasimus_insect::drone_thanasimus_insect(group* familyGr) :
    insect(familyGr, 3000, 5, 16),
    drone_insect(familyGr, 3000, 5, 16, 1000),
    thanasimus_insect(familyGr, 3000, 5, 16)
{

}

void drone_thanasimus_insect::bornInsect()
{
    group* soldierGroup = getFamilyGroup()->getFamilyColony()->getGroup("soldier");
    soldierGroup->addInsect(new soldier_thanasimus_insect(soldierGroup));
}
