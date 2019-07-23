#include "worker_thanasimus_insect.h"

worker_thanasimus_insect::worker_thanasimus_insect(group* familyGr) :
    insect(familyGr, 5000, 8, 13),
    worker_insect(familyGr, 5000, 8, 13, 6),
    thanasimus_insect(familyGr, 5000, 8, 13)
{

}
