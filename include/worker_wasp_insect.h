#ifndef WORKER_WASP_INSECT_H
#define WORKER_WASP_INSECT_H

class wasp_insect;
class worker_insect;

#include "wasp_insect.h"
#include "worker_insect.h"

class worker_wasp_insect :
    public worker_insect,
    public wasp_insect
{
    public:
        worker_wasp_insect(group* familyGr);

    protected:

    private:
};

#endif // WORKER_WASP_INSECT_H
