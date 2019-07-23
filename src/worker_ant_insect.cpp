#include "worker_ant_insect.h"

worker_ant_insect::worker_ant_insect(group* familyGr) :
    insect(familyGr, 6000, 7, 32),
    worker_insect(familyGr, 6000, 7, 32, 2),
    ant_insect(familyGr, 6000, 7, 32)
{

}
