#include "BrickMoveL.h"

BrickMoveL::BrickMoveL()
{
}

BrickMoveL::~BrickMoveL()
{
}

int BrickMoveL::SystemeMoveL(sf::Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (mousePos.x > 247 && mousePos.x < 388 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			// std::cout << "Tu clique sur la brique faire un pas a gauche" << std::endl;
			return 2;
		}
	}

	return 0;
}
