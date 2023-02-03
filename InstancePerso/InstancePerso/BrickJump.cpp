#include "BrickJump.h"

BrickJump::BrickJump()
{
}
BrickJump::~BrickJump()
{
}

int BrickJump::SystemMoveJ(sf::Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (mousePos.x > 447 && mousePos.x < 588 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			// std::cout << "Tu clique sur la brique faire un saut sur place" << std::endl;
			return 3;
		}
	}

	return 0;
}
