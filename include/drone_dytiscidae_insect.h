#ifndef DRONE_DYTISCIDAE_INSECT_H
#define DRONE_DYTISCIDAE_INSECT_H

class dytiscidae_insect;
class drone_insect;
class soldier_dytiscidae_insect;

#include "dytiscidae_insect.h"
#include "drone_insect.h"
#include "soldier_dytiscidae_insect.h"

class drone_dytiscidae_insect :
    public drone_insect,
    public dytiscidae_insect
{
    public:
        drone_dytiscidae_insect(group* familyGr);
        void bornInsect();

    protected:

    private:
};

#endif // DRONE_DYTISCIDAE_INSECT_H
