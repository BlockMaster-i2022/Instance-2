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
	sf::Sprite m_OnMoveRight;
	sf::Sprite m_OnMoveLeft;
	sf::Sprite m_Jump;
	sf::Sprite m_JumpForward;
	sf::Sprite m_CatchObject;
	sf::Sprite m_ThrowObject;
	sf::Sprite m_firsBrick;
	sf::Sprite m_Run;
	sf::Sprite m_Map;

	sf::Texture m_textureOnMoveRight;
	sf::Texture m_textureOnMoveLeft;
	sf::Texture m_textureJump;
	sf::Texture m_textureJumpForward;
	sf::Texture m_textureCatchObject;
	sf::Texture m_textureThrowObject;
	sf::Texture m_textureFirstBrick;
	sf::Texture m_textureRun;
	sf::Texture m_textureMap;

	float m_PosBricksX;
	float m_PosBricksY;

	bool m_printOne;
};