#ifndef WORKER_INSECT_H
#define WORKER_INSECT_H

class insect;

#include "insect.h"

class worker_insect : public virtual insect
{
    public:
        worker_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad, int cur);
        int getCure();
        virtual void actTheInsect();
        virtual void setVirtualTargetColony();
        virtual void addGroupsToAct();

    protected:

    private:
        int cure;
};

#endif // WORKER_INSECT_H
