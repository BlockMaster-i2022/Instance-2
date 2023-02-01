#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

int main()
{
    // création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "CodVenture");

    // Game while open
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {

            }
        }

        // Black screen
        window.clear(sf::Color(0, 0, 147));

        // Update
        // window.draw(...);

        // Last Frame
        window.display();
    }

    return 0;
}
