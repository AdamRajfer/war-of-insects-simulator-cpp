#ifndef WORKER_ANT_INSECT_H
#define WORKER_ANT_INSECT_H

class ant_insect;
class worker_insect;

#include "ant_insect.h"
#include "worker_insect.h"

class worker_ant_insect :
    public worker_insect,
    public ant_insect
{
    public:
        worker_ant_insect(group* familyGr);

    protected:

    private:
};

#endif // WORKER_ANT_INSECT_H
