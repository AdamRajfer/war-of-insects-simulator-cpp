#ifndef THANASIMUS_INSECT_H
#define THANASIMUS_INSECT_H

class insect;

#include "insect.h"

class thanasimus_insect : public virtual insect
{
    public:
        thanasimus_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad);
        virtual void moveTheInsect(position border);

    protected:

    private:
};

#endif // THANASIMUS_INSECT_H
