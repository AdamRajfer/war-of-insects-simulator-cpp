#ifndef DRONE_WASP_INSECT_H
#define DRONE_WASP_INSECT_H

class wasp_insect;
class drone_insect;
class soldier_wasp_insect;

#include "wasp_insect.h"
#include "drone_insect.h"
#include "soldier_wasp_insect.h"

class drone_wasp_insect :
    public drone_insect,
    public wasp_insect
{
    public:
        drone_wasp_insect(group* familyGr);
        void bornInsect();

    protected:

    private:
};

#endif // DRONE_WASP_INSECT_H
