#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

#include "Bricks.h"
#include "Player.h"

int main()
{
    Bricks b;
    Player p;
    // window creation
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "CodVenture");

    // Game while open
    while (window.isOpen())
    {
        sf::Event event;

        b.DisplayBricks();
        p.CreatePlayer();

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                b.systemBricks(window, event);
            }
        }

        // Black screen
        window.clear(sf::Color(0, 0, 147));

        // Update
        // window.draw(...);        
        b.DrawSystemBricks(window);
        p.DrawPlayer(window);

        // Last Frame
        window.display();
    }

    return 0;
}