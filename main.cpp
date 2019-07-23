#include "simulation_panel.h"

int main()
{
    srand(time(NULL));
    simulation_panel* sim = new simulation_panel();
    delete sim;
    return 0;
}
