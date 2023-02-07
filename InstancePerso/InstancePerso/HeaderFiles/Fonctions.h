#pragma once
// Includes
#pragma once
#include "SFML/Graphics.hpp"
#include "SFPhysics.h"


//=====================================//
//======PROTOTYPES-DES-FONCTIONS=======//


void InputHandler(sf::Event event, sf::RenderWindow& window);

//////////////////////////////////////////////////////////////////////
/// \brief Fonction permettant le paramétrage d'un objet à forme rectangulaire
/// 
/// \param rectangle : Nom de l'objet rectangulaire que vous souhaitez paramétrer
/// \param xPos : Position X en nombre entier
/// \param yPos : Position Y en nombre entier
/// \param xSize : Taille X en nombre entier
/// \param ySize : Taille Y en nombre entier
/// \param color : Couleur du rectangle ( sf::Color::Red ou sf::Color(255, 255, 255) )
/// \param isStatic : Est ce que l'objet est sensible à la gravité ?
void RectangleConfiguration(sfp::PhysicsRectangle& rectangle, int xPos, int yPos, int xSize, int ySize, Color color, bool isStatic);


