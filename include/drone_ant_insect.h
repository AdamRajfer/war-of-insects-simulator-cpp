#ifndef DRONE_ANT_INSECT_H
#define DRONE_ANT_INSECT_H

class ant_insect;
class drone_insect;
class soldier_ant_insect;

#include "ant_insect.h"
#include "drone_insect.h"
#include "soldier_ant_insect.h"

class drone_ant_insect :
    public drone_insect,
    public ant_insect
{
    public:
        drone_ant_insect(group* familyGr);
        void bornInsect();

    protected:

    private:
};

#endif // DRONE_ANT_INSECT_H
