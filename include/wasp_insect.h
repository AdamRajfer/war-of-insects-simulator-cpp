#ifndef WASP_INSECT_H
#define WASP_INSECT_H

class insect;

#include "insect.h"

class wasp_insect : public virtual insect
{
    public:
        wasp_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad);
        virtual void moveTheInsect(position border);

    protected:

    private:
};

#endif // WASP_INSECT_H
