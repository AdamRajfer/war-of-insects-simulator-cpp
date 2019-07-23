#include "environment.h"

environment::environment()
{
    colonyMap.clear();
}

environment::~environment()
{
    for (std::map<std::string, colony*>::iterator ite = colonyMap.begin(); ite != colonyMap.end(); ++ite)
    {
        colony* col = ite->second;
        delete col;
    }
    colonyMap.clear();
}

std::map<std::string, colony*> environment::getColonyMap()
{
    return colonyMap;
}

colony* environment::getColony(std::string colonyName)
{
    return colonyMap[colonyName];
}

void environment::insertColony(std::string colonyName, colony* col)
{
    colonyMap.insert(std::make_pair(colonyName, col));
}

std::vector<std::pair<int, sf::Color> > environment::getInsectsCounts()
{
    std::vector<std::pair<int, sf::Color> > insectsCounts;
    for (std::map<std::string, colony*>::iterator ite = colonyMap.begin(); ite != colonyMap.end(); ++ite)
    {
        colony* col = ite->second;
        col->setInsectsCounts(insectsCounts);
    }
    return insectsCounts;
}

std::vector<std::pair<position, sf::Color> > environment::getPositions()
{
    std::vector<std::pair<position, sf::Color> > insectPositions;
    for (std::map<std::string, colony*>::iterator ite = colonyMap.begin(); ite != colonyMap.end(); ++ite)
    {
        colony* col = ite->second;
        col->setPositions(insectPositions);
    }
    return insectPositions;
}

void environment::findTargets()
{
    for (std::map<std::string, colony*>::iterator ite = colonyMap.begin(); ite != colonyMap.end(); ++ite)
    {
        colony* col = ite->second;
        col->findTargets();
    }
}

void environment::go()
{
    for (std::map<std::string, colony*>::iterator ite = colonyMap.begin(); ite != colonyMap.end(); ++ite)
    {
        colony* col = ite->second;
        col->go();
    }
}
