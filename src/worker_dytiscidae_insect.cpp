#include "worker_dytiscidae_insect.h"

worker_dytiscidae_insect::worker_dytiscidae_insect(group* familyGr) :
    insect(familyGr, 6000, 5, 27),
    worker_insect(familyGr, 6000, 5, 27, 2),
    dytiscidae_insect(familyGr, 6000, 5, 27)
{

}
