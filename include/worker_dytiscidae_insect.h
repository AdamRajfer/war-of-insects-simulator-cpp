#ifndef WORKER_DYTISCIDAE_INSECT_H
#define WORKER_DYTISCIDAE_INSECT_H

class dytiscidae_insect;
class worker_insect;

#include "dytiscidae_insect.h"
#include "worker_insect.h"

class worker_dytiscidae_insect :
    public worker_insect,
    public dytiscidae_insect
{
    public:
        worker_dytiscidae_insect(group* familyGr);

    protected:

    private:
};

#endif // WORKER_DYTISCIDAE_INSECT_H
