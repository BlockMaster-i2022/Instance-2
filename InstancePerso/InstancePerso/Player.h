#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>
#include <chrono>
#include <thread>
#include <vector>

#include "Enemies.h"

class Player
	: public sf::RectangleShape 
{
public:
	Player();
	~Player();

	//debug 
	sf::RectangleShape m_rect;

	void CreatePlayer();
	void createTab(int index);
	void tabRead();
	void Gravity(RenderWindow& window);

private:
	sf::Texture m_PlayerTexture;

	float m_playerX;
	float m_playerY;
	float s, g;

	float m_rectX;
	float m_rectY;


	int indexReadTab;

	bool stop;

	vector<int> tab;
};