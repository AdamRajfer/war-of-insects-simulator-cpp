#ifndef QUEEN_WASP_INSECT_H
#define QUEEN_WASP_INSECT_H

class wasp_insect;
class queen_insect;

#include "wasp_insect.h"
#include "queen_insect.h"

class queen_wasp_insect :
    public queen_insect,
    public wasp_insect
{
    public:
        queen_wasp_insect(group* familyGr);

    protected:

    private:
};

#endif // QUEEN_WASP_INSECT_H
