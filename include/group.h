#ifndef GROUP_H
#define GROUP_H

class position;
class insect;
class colony;

#include <vector>
#include <map>
#include <SFML/Graphics.hpp>

#include "position.h"
#include "insect.h"
#include "colony.h"

class group
{
    public:
        group(colony* familyCol);
        ~group();
        colony* getFamilyColony();
        std::vector<insect*> getInsectVector();
        insect* getInsect(int i);
        insect* getRandomInsect();
        void addInsect(insect* ins);
        void removeInsect(insect* ins);
        void killInsect(insect* ins);
        void setPositions(std::vector<std::pair<position, sf::Color> >& positions);
        void findTargets();
        void go();

    protected:

    private:
        colony* familyColony;
        std::vector<insect*> insectVector;
};

#endif // GROUP_H
