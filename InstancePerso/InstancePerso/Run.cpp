#include "Run.h"

Run::Run(Player* player)
{
	p = player;
}

Run::~Run()
{
}

bool Run::systemRun(sf::Event event)
{
	Vector2i mousePos = Mouse::getPosition();
	
	if (mousePos.x > 1797 && mousePos.x < 1893 && mousePos.y > 846 && mousePos.y < 892)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique run" << std::endl;
			p->tabRead();
		}
	}

	return false;
}
