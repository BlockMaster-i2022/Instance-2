#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>


class Bricks
{
public:
	Bricks();
	~Bricks();
	void DisplayBricks();
	void DrawSystemBricks(sf::RenderWindow& window);
	void systemBricks(sf::RenderWindow& window, sf::Event event);
private:
	//Bricks1 : right step
	//Bricks2 : left step
	sf::Sprite m_OnMoveRight;
	sf::Sprite m_firsBrick;
	sf::Sprite m_Run;

	sf::Texture m_textureOnMoveRight;
	sf::Texture m_textureFirstBrick;
	sf::Texture mtextureRun;

	float m_PosBricksX;
	float m_PosBricksY;

	bool m_printOne;
};

