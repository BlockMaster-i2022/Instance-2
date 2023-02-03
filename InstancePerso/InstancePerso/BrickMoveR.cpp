#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

#include "BrickMoveR.h"
#include "player.h"

BrickMoveR::BrickMoveR()
{
}

BrickMoveR::~BrickMoveR()
{

}

int BrickMoveR::SystemeMoveR(sf::Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (mousePos.x > 47 && mousePos.x < 188 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
//			std::cout << "Tu clique sur la brique faire un pas a droite" << std::endl;
			return 1;
		}	
	}
	return 0;
}