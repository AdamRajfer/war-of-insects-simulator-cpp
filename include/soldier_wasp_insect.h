#ifndef SOLDIER_WASP_INSECT_H
#define SOLDIER_WASP_INSECT_H

class wasp_insect;
class soldier_insect;

#include "wasp_insect.h"
#include "soldier_insect.h"

class soldier_wasp_insect :
    public soldier_insect,
    public wasp_insect
{
    public:
        soldier_wasp_insect(group* familyGr);

    protected:

    private:
};

#endif // SOLDIER_WASP_INSECT_H
