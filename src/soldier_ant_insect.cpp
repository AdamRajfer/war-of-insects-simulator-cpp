#include "soldier_ant_insect.h"

soldier_ant_insect::soldier_ant_insect(group* familyGr) :
    insect(familyGr, 3000, 8, 31),
    soldier_insect(familyGr, 3000, 8, 31, 4),
    ant_insect(familyGr, 3000, 8, 31)
{

}
