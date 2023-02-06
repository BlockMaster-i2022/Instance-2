#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>4
#include "BrickMoveR.h"
#include "BrickMoveL.h"
#include <vector>

class Player
	: public sf::RectangleShape
{
public:
	Player();
	~Player();

	void DrawPlayer(sf::RenderWindow& window);
	void CreatePlayer();
	void createTab(int index);
	void tabRead();
	void Gravity(RenderWindow& window);
	void Collider();
private:
	float m_playerX;
	float m_playerY;

    float s, g;

	vector<int> tab;
};