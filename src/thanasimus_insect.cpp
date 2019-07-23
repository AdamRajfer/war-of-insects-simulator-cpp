#include "thanasimus_insect.h"

thanasimus_insect::thanasimus_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad) :
    insect(familyGr, insHealth, goingRad, battleArrayRad)
{

}

void thanasimus_insect::moveTheInsect(position border)
{
    changeInsectPosition(border.getX() * 3, border.getY() * 1);
}
