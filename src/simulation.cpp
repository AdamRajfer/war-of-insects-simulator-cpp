#include "simulation.h"

simulation::simulation()
{
    myEnvironment = new environment();

    colony* antColony = new colony(myEnvironment, 200, 200, sf::Color::Red);
    colony* waspColony = new colony(myEnvironment, 600, 200, sf::Color::Blue);
    colony* dytiscidaeColony = new colony(myEnvironment, 600, 600, sf::Color::White);
    colony* thanasimusColony = new colony(myEnvironment, 200, 600, sf::Color::Green);

    antColony->setEnemyColony(waspColony);
    waspColony->setEnemyColony(dytiscidaeColony);
    dytiscidaeColony->setEnemyColony(thanasimusColony);
    thanasimusColony->setEnemyColony(antColony);

    group* queen_ant_group = new group(antColony);
    group* drone_ant_group = new group(antColony);
    group* soldier_ant_group = new group(antColony);
    group* worker_ant_group = new group(antColony);

    group* queen_wasp_group = new group(waspColony);
    group* drone_wasp_group = new group(waspColony);
    group* soldier_wasp_group = new group(waspColony);
    group* worker_wasp_group = new group(waspColony);

    group* queen_dytiscidae_group = new group(dytiscidaeColony);
    group* drone_dytiscidae_group = new group(dytiscidaeColony);
    group* soldier_dytiscidae_group = new group(dytiscidaeColony);
    group* worker_dytiscidae_group = new group(dytiscidaeColony);

    group* queen_thanasimus_group = new group(thanasimusColony);
    group* drone_thanasimus_group = new group(thanasimusColony);
    group* soldier_thanasimus_group = new group(thanasimusColony);
    group* worker_thanasimus_group = new group(thanasimusColony);

    antColony->insertGroup("queen", queen_ant_group);
    antColony->insertGroup("soldier", soldier_ant_group);
    antColony->insertGroup("drone", drone_ant_group);
    antColony->insertGroup("worker", worker_ant_group);

    waspColony->insertGroup("queen", queen_wasp_group);
    waspColony->insertGroup("soldier", soldier_wasp_group);
    waspColony->insertGroup("drone", drone_wasp_group);
    waspColony->insertGroup("worker", worker_wasp_group);

    dytiscidaeColony->insertGroup("queen", queen_dytiscidae_group);
    dytiscidaeColony->insertGroup("soldier", soldier_dytiscidae_group);
    dytiscidaeColony->insertGroup("drone", drone_dytiscidae_group);
    dytiscidaeColony->insertGroup("worker", worker_dytiscidae_group);

    thanasimusColony->insertGroup("queen", queen_thanasimus_group);
    thanasimusColony->insertGroup("soldier", soldier_thanasimus_group);
    thanasimusColony->insertGroup("drone", drone_thanasimus_group);
    thanasimusColony->insertGroup("worker", worker_thanasimus_group);

    myEnvironment->insertColony("ant", antColony);
    myEnvironment->insertColony("wasp", waspColony);
    myEnvironment->insertColony("dytiscidae", dytiscidaeColony);
    myEnvironment->insertColony("thanasimus", thanasimusColony);

    for (int i = 0; i < 20; ++i)
    {
        queen_ant_group->addInsect(new queen_ant_insect(queen_ant_group));
    }
    for (int i = 0; i < 40; ++i)
    {
        soldier_ant_group->addInsect(new soldier_ant_insect(soldier_ant_group));
    }
    for (int i = 0; i < 30; ++i)
    {
        drone_ant_group->addInsect(new drone_ant_insect(drone_ant_group));
    }
    for (int i = 0; i < 50; ++i)
    {
        worker_ant_group->addInsect(new worker_ant_insect(worker_ant_group));
    }


    for (int i = 0; i < 40; ++i)
    {
        queen_wasp_group->addInsect(new queen_wasp_insect(queen_wasp_group));
    }
    for (int i = 0; i < 20; ++i)
    {
        soldier_wasp_group->addInsect(new soldier_wasp_insect(soldier_wasp_group));
    }
    for (int i = 0; i < 50; ++i)
    {
        drone_wasp_group->addInsect(new drone_wasp_insect(drone_wasp_group));
    }
    for (int i = 0; i < 30; ++i)
    {
        worker_wasp_group->addInsect(new worker_wasp_insect(worker_wasp_group));
    }


    for (int i = 0; i < 30; ++i)
    {
        queen_dytiscidae_group->addInsect(new queen_dytiscidae_insect(queen_dytiscidae_group));
    }
    for (int i = 0; i < 50; ++i)
    {
        soldier_dytiscidae_group->addInsect(new soldier_dytiscidae_insect(soldier_dytiscidae_group));
    }
    for (int i = 0; i < 20; ++i)
    {
        drone_dytiscidae_group->addInsect(new drone_dytiscidae_insect(drone_dytiscidae_group));
    }
    for (int i = 0; i < 40; ++i)
    {
        worker_dytiscidae_group->addInsect(new worker_dytiscidae_insect(worker_dytiscidae_group));
    }


    for (int i = 0; i < 50; ++i)
    {
        queen_thanasimus_group->addInsect(new queen_thanasimus_insect(queen_thanasimus_group));
    }
    for (int i = 0; i < 30; ++i)
    {
        soldier_thanasimus_group->addInsect(new soldier_thanasimus_insect(soldier_thanasimus_group));
    }
    for (int i = 0; i < 40; ++i)
    {
        drone_thanasimus_group->addInsect(new drone_thanasimus_insect(drone_thanasimus_group));
    }
    for (int i = 0; i < 20; ++i)
    {
        worker_thanasimus_group->addInsect(new worker_thanasimus_insect(worker_thanasimus_group));
    }
}

simulation::~simulation()
{
    delete myEnvironment;
}

environment* simulation::getEnvironment()
{
    return myEnvironment;
}

void simulation::startTour()
{
    myEnvironment->findTargets();
    myEnvironment->go();
}
