#include "simulation_panel.h"

inline void _sleep(int milliseconds)
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
		
    }
}

simulation_panel::simulation_panel() : myWindow(sf::VideoMode(800, 800), "War if Insects Simulator")
{
    sf::Font font;
    font.loadFromFile("./data/arial.ttf");
    mySimulation = new simulation();
    while (myWindow.isOpen())
    {
        sf::Event event;
        while (myWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                myWindow.close();
            }
        }
        myWindow.clear();
        mySimulation->startTour();
        std::vector<std::pair<int, sf::Color> > insectsCounts(mySimulation->getEnvironment()->getInsectsCounts());
        std::vector<std::pair<position, sf::Color> > insectPostions(mySimulation->getEnvironment()->getPositions());
        float x = 50;
		_sleep(10);
        for (std::vector<std::pair<int, sf::Color> >::const_iterator ite = insectsCounts.begin(); ite != insectsCounts.end(); ++ite)
        {
            int insCount(ite->first);
            std::stringstream stream;
            stream << insCount;
            std::string text = stream.str();
            sf::Color color(ite->second);
            sf::Text number;
            number.setFont(font);
            number.setString(text);
            number.setCharacterSize(30);
            number.setFillColor(color);
            number.setStyle(sf::Text::Regular);
            number.setPosition(50, x);
            myWindow.draw(number);
            x += 50;
        }
        for (std::vector<std::pair<position, sf::Color> >::const_iterator ite = insectPostions.begin(); ite != insectPostions.end(); ++ite)
        {
            position pos(ite->first);
            sf::CircleShape point(2);
            point.setFillColor(ite->second);
            point.setPosition(pos.getX(), pos.getY());
            myWindow.draw(point);
        }
        myWindow.display();
    }
}

simulation_panel::~simulation_panel()
{
    myWindow.~RenderWindow();
    delete mySimulation;
}
