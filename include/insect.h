#ifndef INSECT_H
#define INSECT_H

class position;
class group;

#include <vector>
#include <map>
#include <SFML/Graphics.hpp>

#include "position.h"
#include "group.h"

class insect_interface
{
    public:
        virtual void moveTheInsect(position border) = 0;
        virtual void actTheInsect() = 0;
        virtual void addGroupsToAct() = 0;
        virtual void setVirtualTargetColony() = 0;
};

class insect : public insect_interface
{
    public:
        insect(group* familyGr, int insHealth, int goingRad, int battleArrayRad);
        virtual ~insect();
        group* getFamilyGroup();
        position getInsectPosition();
        position getStartInsectPosition();
        int getInsectHealth();
        int getStartInsectHealth();
        int getGoingRadius();
        int getBattleArrayRadius();
        std::vector<std::string> getGroupsToAct();
        std::vector<insect*> getInsectsActing();
        insect* getTargetInsect();
        colony* getTargetColony();
        group* getRandomGroup();
        void changeInsectPosition(int dx, int dy);
        void changeStartInsectPosition(int dx, int dy);
        void changeInsectHealth(int dh);
        void changeStartInsectHealth(int dh);
        void startActing(insect* targIns);
        void stopActing();
        void stopActed();
        void findTarget();
        void go();

    protected:
        position findDistance();
        position findBorder();
        void addGroupToAct(std::string grToAct);
        void setTargetColony(colony* targetCol);

    private:
        group* familyGroup;
        position insectPosition;
        position startInsectPosition;
        int insectHealth;
        int startInsectHealth;
        int goingRadius;
        int battleArrayRadius;
        std::vector<std::string> groupsToAct;
        std::vector<insect*> insectsActing;
        insect* targetInsect;
        colony* targetColony;
        void setBattleArray();
        void addInsectActing(insect* ins);
        void removeInsectActing(std::vector<insect*>::iterator ite);
};

#endif // INSECT_H
