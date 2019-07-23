#include "colony.h"

colony::colony(environment* familyEnv, int xx, int yy, sf::Color col) :
    familyEnvironment(familyEnv),
    colonyPosition(xx, yy),
    color(col)
{
    groupMap.clear();
}

colony::~colony()
{
    for (std::map<std::string, group*>::iterator ite = groupMap.begin(); ite != groupMap.end(); ++ite)
    {
        group* gr = ite->second;
        delete gr;
    }
    colonyPosition.~position();
    groupMap.clear();
    familyEnvironment = NULL;
}

environment* colony::getFamilyEnvironment()
{
    return familyEnvironment;
}

position colony::getColonyPosition()
{
    return colonyPosition;
}

std::map<std::string, group*> colony::getGroupMap()
{
    return groupMap;
}

colony* colony::getEnemyColony()
{
    return enemyColony;
}

sf::Color colony::getColor()
{
    return color;
}

group* colony::getGroup(std::string grName)
{
    return groupMap[grName];
}

void colony::insertGroup(std::string grName, group* gr)
{
    groupMap.insert(std::make_pair(grName, gr));
}

void colony::setEnemyColony(colony* enemyCol)
{
    enemyColony = enemyCol;
}

void colony::setInsectsCounts(std::vector<std::pair<int, sf::Color> >& counts)
{
    int insCount = 0;
    for (std::map<std::string, group*>::iterator ite = groupMap.begin(); ite != groupMap.end(); ++ite)
    {
        group* gr = ite->second;
        insCount += gr->getInsectVector().size();
    }
    counts.push_back(std::make_pair(insCount, color));
}

void colony::setPositions(std::vector<std::pair<position, sf::Color> >& positions)
{
    for (std::map<std::string, group*>::iterator ite = groupMap.begin(); ite != groupMap.end(); ++ite)
    {
        group* gr = ite->second;
        gr->setPositions(positions);
    }
}

void colony::findTargets()
{
    for (std::map<std::string, group*>::iterator ite = groupMap.begin(); ite != groupMap.end(); ++ite)
    {
        group* gr = ite->second;
        gr->findTargets();
    }
}

void colony::go()
{
    for (std::map<std::string, group*>::iterator ite = groupMap.begin(); ite != groupMap.end(); ++ite)
    {
        group* gr = ite->second;
        gr->go();
    }
}
