#ifndef ANT_INSECT_H
#define ANT_INSECT_H

class insect;

#include "insect.h"

class ant_insect : public virtual insect
{
    public:
        ant_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad);
        virtual void moveTheInsect(position border);

    protected:

    private:
};

#endif // ANT_INSECT_H
