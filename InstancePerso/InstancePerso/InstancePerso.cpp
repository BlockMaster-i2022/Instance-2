#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

#include "Bricks.h"
#include "Player.h"

int main()
{
    Player p;
    Bricks b(&p);
    
    b.DisplayBricks();
    p.CreatePlayer();

    // window creation
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
                int moveRResult = b.SystemeMoveR(event);
                int moveLResult = b.SystemeMoveL(event);
                int moveJFResult = b.SystemMoveJF(event);
                int moveJResult = b.SystemMoveJ(event);
                
                if (moveRResult != 0 )
                {
                    p.createTab(moveRResult);
                }
                if (moveLResult != 0)
                {
                    p.createTab(moveLResult);
                }
                if (moveJFResult != 0)
                {
                    p.createTab(moveJFResult);
                }
                if (moveJResult != 0)
                {
                    p.createTab(moveJResult);
                }
                b.SystemRun(event);
            }
        }
            // Black screen
            window.clear(sf::Color(0, 0, 255));

            // Update
            b.LoopRun();
            // window.draw(...);  
            b.DrawSystemBricks(window);
            b.DrawTab(window);
            p.Gravity(window);

            // Last Frame
            window.display();
    }

    return 0;
}