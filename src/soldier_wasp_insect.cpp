#include "soldier_wasp_insect.h"

soldier_wasp_insect::soldier_wasp_insect(group* familyGr) :
    insect(familyGr, 5000, 10, 18),
    soldier_insect(familyGr, 5000, 10, 18, 3),
    wasp_insect(familyGr, 5000, 10, 18)
{

}
