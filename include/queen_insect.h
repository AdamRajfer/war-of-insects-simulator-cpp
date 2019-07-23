#ifndef QUEEN_INSECT_H
#define QUEEN_INSECT_H

class insect;

#include "insect.h"

class queen_insect : public virtual insect
{
    public:
        queen_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad);
        virtual void actTheInsect();
        virtual void setVirtualTargetColony();
        virtual void addGroupsToAct();

    protected:

    private:
};

#endif // QUEEN_INSECT_H
