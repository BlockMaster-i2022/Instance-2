#include "BrickJumpForward.h"

BrickJumpForward::BrickJumpForward()
{
}

BrickJumpForward::~BrickJumpForward()
{
}

int BrickJumpForward::SystemMoveJF(sf::Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (mousePos.x > 647 && mousePos.x < 788 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			// std::cout << "Tu clique sur la brique faire un saut en avant" << std::endl;
			return 4;
		}
	}

	return 0;
}

