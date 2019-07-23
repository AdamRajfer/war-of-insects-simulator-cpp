#ifndef QUEEN_ANT_INSECT_H
#define QUEEN_ANT_INSECT_H

class ant_insect;
class queen_insect;

#include "ant_insect.h"
#include "queen_insect.h"

class queen_ant_insect :
    public queen_insect,
    public ant_insect
{
    public:
        queen_ant_insect(group* familyGr);

    protected:

    private:
};

#endif // QUEEN_ANT_INSECT_H
