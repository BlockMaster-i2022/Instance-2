#include "../HeaderFiles/Fonctions.h"

//=====================================//
//==============FONCTIONS==============//


// Gestion des �vent / imputs
void InputHandler(sf::Event event, sf::RenderWindow& window)
{
    // Fermeture de la fen�tre si on clique sur la croix
    if (event.type == sf::Event::Closed)
    {
        // On ferme la fen�tre
        window.close();
    }

    // Clique sur un bouton du menu principal (EN COUR)
    if (event.type == sf::Event::MouseLeft)
    {
        //getGlobal.
    }
}


void RectangleConfiguration(sfp::PhysicsRectangle& rectangle, int xPos, int yPos, int xSize, int ySize, Color color, bool isStatic)
{
    // Param�trage de la position par rapport � son centre
    rectangle.setCenter(Vector2f(xPos, yPos));
    // Param�trage de la taille
    rectangle.setSize(Vector2f(xSize, ySize));
    // Param�trage de sa couleur
    rectangle.setFillColor(color);
    // Param�trage de si oui ou non il est sensible � la gravit�
    rectangle.setStatic(isStatic);
}
