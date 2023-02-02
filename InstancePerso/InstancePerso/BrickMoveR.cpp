#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

#include "BrickMoveR.h"
#include "player.h"

BrickMoveR::BrickMoveR()
{
	sf::Texture m_OnTMoveRight;
	sf::Sprite m_OnMoveRight;
}

BrickMoveR::~BrickMoveR()
{
	sf::Texture m_OnTMoveRight;
	sf::Sprite m_OnMoveRight;
}

void BrickMoveR::displayBrickMoveR()
{
	if (!m_OnTMoveRight.loadFromFile("assets/Right.png"))
		std::cout << "Fail to load Right.png" << std::endl;

}

void BrickMoveR::drawBrickMoveR(sf::RenderWindow& window)
{
	window.draw(m_OnMoveRight);
}

void BrickMoveR::SystemeMoveR()
{
	
}
