#include "wasp_insect.h"

wasp_insect::wasp_insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad) :
    insect(familyGr, insHealth, goingRad, battleArrayRad)
{

}

void wasp_insect::moveTheInsect(position border)
{
    changeInsectPosition(border.getX() * 1, border.getY() * 3);
}
