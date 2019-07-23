#include "drone_wasp_insect.h"

drone_wasp_insect::drone_wasp_insect(group* familyGr) :
    insect(familyGr, 3000, 9, 19),
    drone_insect(familyGr, 3000, 9, 19, 900),
    wasp_insect(familyGr, 3000, 9, 19)
{

}

void drone_wasp_insect::bornInsect()
{
    group* soldierGroup = getFamilyGroup()->getFamilyColony()->getGroup("soldier");
    soldierGroup->addInsect(new soldier_wasp_insect(soldierGroup));
}
