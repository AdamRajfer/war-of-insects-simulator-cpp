#include "queen_wasp_insect.h"

queen_wasp_insect::queen_wasp_insect(group* familyGr) :
    insect(familyGr, 6000, 8, 20),
    queen_insect(familyGr, 6000, 8, 20),
    wasp_insect(familyGr, 6000, 8, 20)
{

}
