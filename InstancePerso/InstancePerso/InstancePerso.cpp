#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

#include "Bricks.h"
#include "Player.h"
#include "BrickMoveR.h"
#include "BrickMoveL.h"
#include "Run.h"
#include "BrickJump.h"
#include "BrickJumpForward.h"

int main()
{
    Bricks b;
    Player p;
    Run r(&p);
    BrickMoveR br;
    BrickMoveL bl;
    BrickJumpForward bjf;
    BrickJump bj;
   
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
                // b.systemBricks(window, event);
                int moveRResult = br.SystemeMoveR(event);
                int moveLResult = bl.SystemeMoveL(event);
                int moveJFResult = bjf.SystemMoveJF(event);
                int moveJResult = bj.SystemMoveJ(event);
                
                std::cout << "La fonction moveRight return : " << moveRResult << std::endl;
                std::cout << "La fonction moveLeft return : " << moveLResult << std::endl;
               
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

                r.systemRun(event);
            }
        }

        // Black screen
        window.clear(sf::Color(0, 0, 255));

        // Update
        // window.draw(...);        
        b.DrawSystemBricks(window);
        p.DrawPlayer(window);

        // Last Frame
        window.display();
    }

    return 0;
}