#include "group.h"

group::group(colony* familyCol) :
    familyColony(familyCol)
{
    insectVector.clear();
}

group::~group()
{
    for (int i = 0; i < insectVector.size(); ++i)
    {
        insect* ins = insectVector.at(i);
        delete ins;
    }
    insectVector.clear();
    familyColony = NULL;
}

colony* group::getFamilyColony()
{
    return familyColony;
}

std::vector<insect*> group::getInsectVector()
{
    return insectVector;
}

insect* group::getInsect(int i)
{
    insect* ins = insectVector.at(i);
    return ins;
}

insect* group::getRandomInsect()
{
    int i = rand() % insectVector.size();
    insect* ins = insectVector.at(i);
    return ins;
}

void group::addInsect(insect* ins)
{
    insectVector.push_back(ins);
}

void group::removeInsect(insect* ins)
{
    std::vector<insect*>::iterator itePom;
    for (std::vector<insect*>::iterator ite = insectVector.begin(); ite != insectVector.end(); ++ite)
    {
        if (*ite == ins)
        {
            itePom = ite;
            break;
        }
    }
    if (*itePom != NULL)
    {
        insectVector.erase(itePom);
    }
}

void group::killInsect(insect* ins)
{
    if (insectVector.size() > 0)
    {
        removeInsect(ins);
        ins->stopActing();
        ins->stopActed();
    }
}

void group::setPositions(std::vector<std::pair<position, sf::Color> >& positions)
{
    if (insectVector.size() > 0)
    {
        for (int i = 0; i < insectVector.size(); ++i)
        {
            insect* ins = insectVector.at(i);
            if (ins != NULL)
            {
                sf::Color color = familyColony->getColor();
                positions.push_back(std::make_pair(ins->getInsectPosition(), color));
            }
        }
    }
}

void group::findTargets()
{
    if (insectVector.size() > 0)
    {
        for (int i = 0; i < insectVector.size(); ++i)
        {
            insect* ins = insectVector.at(i);
            if (ins != NULL)
            {
                ins->findTarget();
            }
        }
    }
}

void group::go()
{
    if (insectVector.size() > 0)
    {
        for (int i = 0; i < insectVector.size(); ++i)
        {
            insect* ins = insectVector.at(i);
            if (ins != NULL)
            {
                ins->go();
            }
        }
    }
}
