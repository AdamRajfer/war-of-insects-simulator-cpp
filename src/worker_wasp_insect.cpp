#include "worker_wasp_insect.h"

worker_wasp_insect::worker_wasp_insect(group* familyGr) :
    insect(familyGr, 4000, 7, 21),
    worker_insect(familyGr, 4000, 7, 21, 4),
    wasp_insect(familyGr, 4000, 7, 21)
{

}
