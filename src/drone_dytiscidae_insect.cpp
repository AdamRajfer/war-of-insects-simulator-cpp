#include "drone_dytiscidae_insect.h"

drone_dytiscidae_insect::drone_dytiscidae_insect(group* familyGr) :
    insect(familyGr, 4000, 8, 24),
    drone_insect(familyGr, 4000, 8, 24, 1100),
    dytiscidae_insect(familyGr, 4000, 8, 24)
{

}

void drone_dytiscidae_insect::bornInsect()
{
    group* soldierGroup = getFamilyGroup()->getFamilyColony()->getGroup("soldier");
    soldierGroup->addInsect(new soldier_dytiscidae_insect(soldierGroup));
}
