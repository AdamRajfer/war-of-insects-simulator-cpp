#ifndef DYTISCIDAE_INSECT_H
#define DYTISCIDAE_INSECT_H

class insect;

#include "insect.h"

class dytiscidae_insect : public virtual insect
{
    public:
        dytiscidae_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad);
        virtual void moveTheInsect(position border);

    protected:

    private:
};

#endif // DYTISCIDAE_INSECT_H
