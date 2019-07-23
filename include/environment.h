#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

class colony;

#include <vector>
#include <map>
#include <SFML/Graphics.hpp>

#include "colony.h"

class environment
{
    public:
        environment();
        ~environment();
        std::map<std::string, colony*> getColonyMap();
        colony* getColony(std::string colonyName);
        void insertColony(std::string colName, colony* col);
        std::vector<std::pair<int, sf::Color> > getInsectsCounts();
        std::vector<std::pair<position, sf::Color> > getPositions();
        void findTargets();
        void go();

    protected:

    private:
        std::map<std::string, colony*> colonyMap;
};

#endif // ENVIRONMENT_H
