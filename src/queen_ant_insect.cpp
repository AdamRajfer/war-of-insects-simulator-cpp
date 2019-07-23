#include "queen_ant_insect.h"

queen_ant_insect::queen_ant_insect(group* familyGr) :
    insect(familyGr, 4000, 9, 30),
    queen_insect(familyGr, 4000, 9, 30),
    ant_insect(familyGr, 4000, 9, 30)
{

}
