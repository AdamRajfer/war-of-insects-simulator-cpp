#ifndef DRONE_THANASIMUS_INSECT_H
#define DRONE_THANASIMUS_INSECT_H

class thanasimus_insect;
class drone_insect;
class soldier_thanasimus_insect;

#include "thanasimus_insect.h"
#include "drone_insect.h"
#include "soldier_thanasimus_insect.h"

class drone_thanasimus_insect :
    public drone_insect,
    public thanasimus_insect
{
    public:
        drone_thanasimus_insect(group* familyGr);
        void bornInsect();

    protected:

    private:
};

#endif // DRONE_THANASIMUS_INSECT_H
