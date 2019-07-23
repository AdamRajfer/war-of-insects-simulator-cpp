#ifndef COLONY_H
#define COLONY_H

class position;
class environment;
class group;

#include <vector>
#include <map>
#include <SFML/Graphics.hpp>

#include "position.h"
#include "environment.h"
#include "group.h"

class colony
{
    public:
        colony(environment* familyEnv, int x, int y, sf::Color col);
        ~colony();
        environment* getFamilyEnvironment();
        position getColonyPosition();
        std::map<std::string, group*> getGroupMap();
        colony* getEnemyColony();
        sf::Color getColor();
        group* getGroup(std::string grName);
        void insertGroup(std::string, group* gr);
        void setEnemyColony(colony* enemyCol);
        void setInsectsCounts(std::vector<std::pair<int, sf::Color> >& counts);
        void setPositions(std::vector<std::pair<position, sf::Color> >& positions);
        void findTargets();
        void go();

    protected:

    private:
        environment* familyEnvironment;
        position colonyPosition;
        std::map<std::string, group*> groupMap;
        colony* enemyColony;
        sf::Color color;
};

#endif // COLONY_H
