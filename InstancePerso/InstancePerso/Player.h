#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

class Player
{
public:
	Player();
	~Player();

	void DrawPlayer(sf::RenderWindow& window);
	void CreatePlayer();

private:
	sf::RectangleShape m_player;

	float m_playerX;
	float m_playerY;
};

