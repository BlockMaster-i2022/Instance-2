#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>4
#include "BrickMoveR.h"
#include "BrickMoveL.h"
#include <vector>

class Player
{
public:
	Player();
	~Player();

	void DrawPlayer(sf::RenderWindow& window);
	void CreatePlayer();
	void createTab(int index);
	void tabRead();

private:
	sfp::PhysicsRectangle m_player;
	float m_playerX;
	float m_playerY;

	vector<int> tab;
};