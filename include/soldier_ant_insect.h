#ifndef SOLDIER_ANT_INSECT_H
#define SOLDIER_ANT_INSECT_H

class ant_insect;
class soldier_insect;

#include "ant_insect.h"
#include "soldier_insect.h"

class soldier_ant_insect :
    public soldier_insect,
    public ant_insect
{
    public:
        soldier_ant_insect(group* familyGr);

    protected:

    private:
};

#endif // SOLDIER_ANT_INSECT_H
