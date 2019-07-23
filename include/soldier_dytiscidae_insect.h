#ifndef SOLDIER_DYTISCIDAE_INSECT_H
#define SOLDIER_DYTISCIDAE_INSECT_H

class dytiscidae_insect;
class soldier_insect;

#include "dytiscidae_insect.h"
#include "soldier_insect.h"

class soldier_dytiscidae_insect :
    public soldier_insect,
    public dytiscidae_insect
{
    public:
        soldier_dytiscidae_insect(group* familyGr);

    protected:

    private:
};

#endif // SOLDIER_DYTISCIDAE_INSECT_H
