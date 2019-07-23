#include "soldier_dytiscidae_insect.h"

soldier_dytiscidae_insect::soldier_dytiscidae_insect(group* familyGr) :
    insect(familyGr, 5000, 6, 26),
    soldier_insect(familyGr, 5000, 6, 26, 5),
    dytiscidae_insect(familyGr, 5000, 6, 26)
{

}
