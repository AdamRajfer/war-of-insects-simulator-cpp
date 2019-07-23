#ifndef QUEEN_DYTISCIDAE_INSECT_H
#define QUEEN_DYTISCIDAE_INSECT_H

class dytiscidae_insect;
class queen_insect;

#include "dytiscidae_insect.h"
#include "queen_insect.h"

class queen_dytiscidae_insect :
    public queen_insect,
    public dytiscidae_insect
{
    public:
        queen_dytiscidae_insect(group* familyGr);

    protected:

    private:
};

#endif // QUEEN_DYTISCIDAE_INSECT_H
