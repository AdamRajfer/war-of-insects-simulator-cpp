#ifndef SIMULATION_PANEL_H
#define SIMULATION_PANEL_H

class simulation;

#include <sstream>
#include <time.h>

#include "simulation.h"

class simulation_panel
{
    public:
        simulation_panel();
        ~simulation_panel();

    protected:

    private:
        sf::RenderWindow myWindow;
        simulation* mySimulation;
};

#endif // SIMULATION_PANEL_H
