#include "soldier_thanasimus_insect.h"

soldier_thanasimus_insect::soldier_thanasimus_insect(group* familyGr) :
    insect(familyGr, 6000, 7, 14),
    soldier_insect(familyGr, 6000, 7, 14, 6),
    thanasimus_insect(familyGr, 6000, 7, 14)
{

}
