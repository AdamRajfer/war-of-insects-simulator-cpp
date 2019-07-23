#ifndef SIMULATION_H
#define SIMULATION_H

class environment;
class queen_ant_insect;
class drone_ant_insect;
class soldier_ant_insect;
class worker_ant_insect;
class queen_wasp_insect;
class drone_wasp_insect;
class soldier_wasp_insect;
class worker_wasp_insect;
class queen_dytiscidae_insect;
class drone_dytiscidae_insect;
class soldier_dytiscidae_insect;
class worker_dytiscidae_insect;
class queen_thanasimus_insect;
class drone_thanasimus_insect;
class soldier_thanasimus_insect;
class worker_thanasimus_insect;

#include "environment.h"
#include "queen_ant_insect.h"
#include "drone_ant_insect.h"
#include "soldier_ant_insect.h"
#include "worker_ant_insect.h"
#include "queen_wasp_insect.h"
#include "drone_wasp_insect.h"
#include "soldier_wasp_insect.h"
#include "worker_wasp_insect.h"
#include "queen_dytiscidae_insect.h"
#include "drone_dytiscidae_insect.h"
#include "soldier_dytiscidae_insect.h"
#include "worker_dytiscidae_insect.h"
#include "queen_thanasimus_insect.h"
#include "drone_thanasimus_insect.h"
#include "soldier_thanasimus_insect.h"
#include "worker_thanasimus_insect.h"

class simulation
{
    public:
        simulation();
        ~simulation();
        environment* getEnvironment();
        void startTour();

    protected:

    private:
        environment* myEnvironment;
};

#endif // SIMULATION_H
