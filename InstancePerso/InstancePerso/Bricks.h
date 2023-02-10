#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>
#include <vector>
#include "Player.h"


class Bricks
{
public:
	Bricks(Player* player);
	~Bricks();
	void DisplayBricks();
	void DrawSystemBricks(sf::RenderWindow& window);
	void systemBricks(sf::RenderWindow& window, sf::Event event);
	void DrawTab(RenderWindow& window);

	int SystemMoveJ(sf::Event event);
	int SystemMoveJF(sf::Event event);
	int SystemeMoveL(sf::Event event); 
	int SystemeMoveR(sf::Event event);
	
	bool SystemRun(sf::Event event);
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

	int i;

	float m_PosBricksX;
	float m_PosBricksY;
	float posX;

	bool m_GameIsRunning;
	bool m_printOne;
	
	vector<sf::Sprite> spriteTab;
	vector<RectangleShape> drawSprite;

	RectangleShape m_RightMove;
	Texture m_textureRightMove;	

	RectangleShape m_LeftMove;
	Texture m_textureLeftMove;

	RectangleShape m_JumpMove;
	Texture m_textureJumpMove;
	
	RectangleShape m_JumpFMove;
	Texture m_textureJumpFMove;

	Player* p;
};