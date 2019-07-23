#ifndef SOLDIER_THANASIMUS_INSECT_H
#define SOLDIER_THANASIMUS_INSECT_H

class thanasimus_insect;
class soldier_insect;

#include "thanasimus_insect.h"
#include "soldier_insect.h"

class soldier_thanasimus_insect :
    public soldier_insect,
    public thanasimus_insect
{
    public:
        soldier_thanasimus_insect(group* familyGr);

    protected:

    private:
};

#endif // SOLDIER_THANASIMUS_INSECT_H
