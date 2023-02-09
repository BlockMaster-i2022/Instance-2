#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

#include "Bricks.h"
#include "Player.h"
#include "Enemies.h"

int main()
{
    //instance Player
    Player p;
    Bricks b(&p);

    //instance enemies Model: enemies "name";
    enemies e;
    
    //Bricks diplays
    b.DisplayBricks();
    //create Player
    p.CreatePlayer();
    //enemies model: "previous name".createEnemies(spawn X, spawn Y)
    e.createEnemies(1059, 100);
    
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
                //Player movement tab
                int moveRResult = b.SystemeMoveR(event);
                int moveLResult = b.SystemeMoveL(event);
                int moveJFResult = b.SystemMoveJF(event);
                int moveJResult = b.SystemMoveJ(event);
                //tab 
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
            // blue background
            window.clear(sf::Color(0, 0, 255));

            // Update
            b.DrawSystemBricks(window);
            b.DrawTab(window);
            //player update
            p.Gravity(window);
            //enemies update model: "previous name".GravityE(window, previous spawn X + 1, max X you want);
            e.GravityE(window, 1060, 1447);

            // Last Frame
            window.display();
    }

    return 0;
}