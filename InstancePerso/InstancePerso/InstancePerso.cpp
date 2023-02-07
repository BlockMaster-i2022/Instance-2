//==============INCLUDES===============//

#include "HeaderFiles/Main.h"
#include "HeaderFiles/Levels.h"
#include "HeaderFiles/Level1.h"

//================MAIN=================//

int main()
{
    // Creation of the window object
    sf::RenderWindow window(sf::VideoMode(WIN_X, WIN_Y, 32), "Codventure");
    window.setVerticalSyncEnabled(true);


    /// Creation of the map and the maps texture ///
    // Gravity
    sfp::World world(Vector2f(0, 1));

    // Map settings
    sfp::PhysicsRectangle map;
    RectangleConfiguration(map, WIN_X / 2, WIN_Y / 2, WIN_X, WIN_Y, sf::Color::White, true);

    // Texture creation
    sf::Texture mapTexture;
    mapTexture.loadFromFile("../assets/Map.png");
    map.setTexture(&mapTexture, false);
    ///


    ///----TEST----///
    // Creation of a test player
    sfp::PhysicsRectangle player;
    RectangleConfiguration(player, 90, 10, 16, 16, sf::Color(0, 0, 255, 255), false);

    // The rebound of the player when he collides
    player.setRestitution(0.2);
    world.AddPhysicsBody(player);
    //////////////////
   

    // Creation of the changeable level system
    Level1 level1;
    Levels* currentLevel = &level1;

    // Adding of a physics
    currentLevel->setPhysics(world);



    // Creation of the object who will handle all events
    sf::Event event;

    // Creation of the clock system
    Clock clock;
    Time lastTime = clock.getElapsedTime();

    //===========GAME-WHILE-OPEN===========//

    while (window.isOpen())
    {
        // Loop on the events
        while (window.pollEvent(event))
        {
            // Gestion of all inputs / events 
            InputHandler(event, window);
        }


        Time currentTime = clock.getElapsedTime();
        unsigned long elapsedMs = (currentTime - lastTime).asMilliseconds();
        if (elapsedMs > 0) {
            lastTime = currentTime;
            world.UpdatePhysics(elapsedMs);

            window.clear(sf::Color::Black);

            // Drawing of all objects
            window.draw(map);
            currentLevel->drawLevel(window);

            window.draw(player);
            //

            window.display();
        }
        // Destruction of all objects
        
        //

    }

    // Termination of the program
    return 0;
}