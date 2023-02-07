#include "../HeaderFiles/Fonctions.h"

//=====================================//
//==============FONCTIONS==============//


// Gestion des évent / imputs
void InputHandler(sf::Event event, sf::RenderWindow& window)
{
    // Fermeture de la fenètre si on clique sur la croix
    if (event.type == sf::Event::Closed)
    {
        // On ferme la fenètre
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
    // Paramétrage de la position par rapport à son centre
    rectangle.setCenter(Vector2f(xPos, yPos));
    // Paramétrage de la taille
    rectangle.setSize(Vector2f(xSize, ySize));
    // Paramétrage de sa couleur
    rectangle.setFillColor(color);
    // Paramétrage de si oui ou non il est sensible à la gravité
    rectangle.setStatic(isStatic);
}
