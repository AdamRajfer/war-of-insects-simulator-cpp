#include "dytiscidae_insect.h"

dytiscidae_insect::dytiscidae_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad) :
    insect(familyGr, insHealth, goingRad, battleArrayRad)
{

}

void dytiscidae_insect::moveTheInsect(position border)
{
    if (getInsectPosition().getY() == getStartInsectPosition().getY())
    {
        changeInsectPosition(border.getX() * 1, findDistance().getY());
    }
    else
    {
        changeInsectPosition(border.getX() * 1, getStartInsectPosition().getY() - getInsectPosition().getY());
    }
}
