#include "ant_insect.h"

ant_insect::ant_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad) :
    insect(familyGr, insHealth, goingRad, battleArrayRad)
{

}

void ant_insect::moveTheInsect(position border)
{
    changeInsectPosition(border.getX() * 2, border.getY() * 2);
}
