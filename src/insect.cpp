#include "insect.h"

insect::insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad) :
    familyGroup(familyGr),
    insectPosition(familyGr->getFamilyColony()->getColonyPosition()),
    startInsectPosition(familyGr->getFamilyColony()->getColonyPosition()),
    insectHealth(insHealth),
    startInsectHealth(insHealth),
    goingRadius(goingRad),
    battleArrayRadius(battleArrayRad)
{
    setBattleArray();
    groupsToAct.clear();
    insectsActing.clear();
    targetInsect = NULL;
    targetColony = NULL;
}

insect::~insect()
{
    familyGroup->killInsect(this);
    familyGroup = NULL;
    insectPosition.~position();
    startInsectPosition.~position();
    insectHealth = 0;
    startInsectHealth = 0;
    goingRadius = 0;
    battleArrayRadius = 0;
    groupsToAct.clear();
    insectsActing.clear();
    targetInsect = NULL;
    targetColony = NULL;
}

group* insect::getFamilyGroup()
{
    return familyGroup;
}

position insect::getInsectPosition()
{
    return insectPosition;
}

position insect::getStartInsectPosition()
{
    return startInsectPosition;
}

int insect::getInsectHealth()
{
    return insectHealth;
}

int insect::getStartInsectHealth()
{
    return startInsectHealth;
}

int insect::getGoingRadius()
{
    return goingRadius;
}

int insect::getBattleArrayRadius()
{
    return battleArrayRadius;
}

std::vector<std::string> insect::getGroupsToAct()
{
    return groupsToAct;
}

std::vector<insect*> insect::getInsectsActing()
{
    return insectsActing;
}

insect* insect::getTargetInsect()
{
    return targetInsect;
}

colony* insect::getTargetColony()
{
    return targetColony;
}

group* insect::getRandomGroup()
{
    int groupNr = rand() % groupsToAct.size();
    std::string key = groupsToAct.at(groupNr);
    group* gr = targetColony->getGroup(key);
    return gr;
}

void insect::changeInsectPosition(int dx, int dy)
{
    insectPosition.addToPosition(dx, dy);
}

void insect::changeStartInsectPosition(int dx, int dy)
{
    startInsectPosition.addToPosition(dx, dy);
}

void insect::changeInsectHealth(int dh)
{
    insectHealth += dh;
}

void insect::changeStartInsectHealth(int dh)
{
    startInsectHealth += dh;
}

void insect::startActing(insect* targetIns)
{
    if (targetInsect == NULL)
    {
        targetInsect = targetIns;
        targetInsect->addInsectActing(this);
    }
}

void insect::stopActing()
{
    if (targetInsect != NULL)
    {
        std::vector<insect*>::iterator itePom;
        for (int i = 0; i < targetInsect->insectsActing.size(); ++i)
        {
            insect* ins = targetInsect->insectsActing.at(i);
            if (ins == this)
            {
                itePom = targetInsect->insectsActing.begin() + i;
                break;
            }
        }
        targetInsect->removeInsectActing(itePom);
        targetInsect = NULL;
    }
}

void insect::stopActed()
{
    if (insectsActing.size() > 0)
    {
        std::vector<insect*> insectsActingPom;
        for (int i = 0; i < insectsActing.size(); ++i)
        {
            insect* ins = insectsActing.at(i);
            insectsActingPom.push_back(ins);
        }
        for (int i = 0; i < insectsActingPom.size(); ++i)
        {
            insect* ins = insectsActingPom.at(i);
            ins->stopActing();
        }
    }
}

void insect::findTarget()
{
    if (targetInsect == NULL)
    {
        bool isPassive = true;
        group* gr = getRandomGroup();
        if (gr->getInsectVector().size() > 0)
        {
            insect* targIns = gr->getRandomInsect();
            if (targIns != NULL)
            {
                if (targIns->getInsectsActing().size() > 0)
                {
                    for (int k = 0; k < targIns->insectsActing.size(); ++k)
                    {
                        insect* secondIns = targIns->insectsActing.at(k);
                        if (secondIns != NULL)
                        {
                            if (secondIns->familyGroup == familyGroup)
                            {
                                isPassive = true;
                                break;
                            }
                            else
                            {
                                isPassive = false;
                            }
                        }
                    }
                }
                else
                {
                    isPassive = false;
                }
                if (isPassive == false)
                {
                    startActing(targIns);
                }
            }
        }
        if (isPassive == true)
        {
            group* targetGr = getRandomGroup();
            if (targetGr->getInsectVector().size() > 0)
            {
                insect* targIns = targetGr->getRandomInsect();
                if (targIns != NULL)
                {
                    startActing(targIns);
                }
            }
        }
    }
}

void insect::go()
{
    if (targetInsect != NULL)
    {
        position distance = findDistance();
        if (abs(distance.getX()) > goingRadius || abs(distance.getY()) > goingRadius)
        {
            position border(findBorder());
            moveTheInsect(border);
        }
        else
        {
            actTheInsect();
        }
    }
}

position insect::findDistance()
{
    insect* ins = getTargetInsect();
    int dx = ins->getInsectPosition().getX() - getInsectPosition().getX();
    int dy = ins->getInsectPosition().getY() - getInsectPosition().getY();
    return position(dx, dy);
}

position insect::findBorder()
{
    position dist = findDistance();
    if (dist.getX() > 0)
    {
        if (dist.getY() > 0)
        {
            return position(1, 1);
        }
        else if (dist.getY() == 0)
        {
            return position(1, 0);
        }
        else if (dist.getY() < 0)
        {
            return position(1, -1);
        }
    }
    else if (dist.getX() == 0)
    {
        if (dist.getY() > 0)
        {
            return position(0, 1);
        }
        else if (dist.getY() == 0)
        {
            return position(0, 0);
        }
        else if (dist.getY() < 0)
        {
            return position(0, -1);
        }
    }
    else if (dist.getX() < 0)
    {
        if (dist.getY() > 0)
        {
            return position(-1, 1);
        }
        else if (dist.getY() == 0)
        {
            return position(-1, 0);
        }
        else if (dist.getY() < 0)
        {
            return position(-1, -1);
        }
    }
}

void insect::addGroupToAct(std::string grToAct)
{
    groupsToAct.push_back(grToAct);
}

void insect::setTargetColony(colony* targetCol)
{
    targetColony = targetCol;
}

void insect::setBattleArray()
{
    int dx = rand() % battleArrayRadius;
    int dy = rand() % battleArrayRadius;
    changeInsectPosition(- battleArrayRadius / 2 + dx, - battleArrayRadius / 2 + dy);
    startInsectPosition.setPosition(insectPosition.getX(), insectPosition.getY());
}

void insect::addInsectActing(insect* ins)
{
    insectsActing.push_back(ins);
}

void insect::removeInsectActing(std::vector<insect*>::iterator ite)
{
    insectsActing.erase(ite);
}
