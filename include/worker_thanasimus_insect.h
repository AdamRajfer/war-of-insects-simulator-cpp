#ifndef WORKER_THANASIMUS_INSECT_H
#define WORKER_THANASIMUS_INSECT_H

class thanasimus_insect;
class worker_insect;

#include "thanasimus_insect.h"
#include "worker_insect.h"

class worker_thanasimus_insect :
    public worker_insect,
    public thanasimus_insect
{
    public:
        worker_thanasimus_insect(group* familyGr);

    protected:

    private:
};

#endif // WORKER_THANASIMUS_INSECT_H
