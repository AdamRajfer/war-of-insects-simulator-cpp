#ifndef SOLDIER_INSECT_H
#define SOLDIER_INSECT_H

class insect;

#include "insect.h"

class soldier_insect : public virtual insect
{
    public:
        soldier_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad, int attac);
        int getAttack();
        virtual void actTheInsect();
        virtual void setVirtualTargetColony();
        virtual void addGroupsToAct();

    protected:

    private:
        int attack;
};

#endif // SOLDIER_INSECT_H
