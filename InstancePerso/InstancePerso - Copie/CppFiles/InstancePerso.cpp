//==============INCLUDES===============//

#include "HeaderFiles/Main.h"



int main()
{

    // Création de la fenètre de jeu
    sf::RenderWindow window(sf::VideoMode(WIN_X, WIN_Y, 32), "Codventure");
    window.setVerticalSyncEnabled(true);

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
