#ifndef QUEEN_THANASIMUS_INSECT_H
#define QUEEN_THANASIMUS_INSECT_H

class thanasimus_insect;
class queen_insect;

#include "thanasimus_insect.h"
#include "queen_insect.h"

class queen_thanasimus_insect :
    public queen_insect,
    public thanasimus_insect
{
    public:
        queen_thanasimus_insect(group* familyGr);

    protected:

    private:
};

#endif // QUEEN_THANASIMUS_INSECT_H
