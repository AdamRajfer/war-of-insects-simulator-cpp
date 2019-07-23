#ifndef DRONE_INSECT_H
#define DRONE_INSECT_H

class insect;

#include "insect.h"

class drone_interface
{
    public:
        virtual void bornInsect() = 0;
};

class drone_insect :
    public virtual insect,
    public virtual drone_interface
{
    public:
        drone_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad, int regenerTime);
        int getRegenerationTime();
        int getPassedTime();
        virtual void actTheInsect();
        virtual void addGroupsToAct();
        virtual void setVirtualTargetColony();

    protected:

    private:
        int regenerationTime;
        int passedTime;
};

#endif // DRONE_INSECT_H
