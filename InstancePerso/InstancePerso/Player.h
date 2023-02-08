#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>
#include <chrono>
#include <thread>
#include <vector>

class Player
	: public sf::RectangleShape
{
public:
	Player();
	~Player();

	void CreatePlayer();
	void createTab(int index);
	void tabRead(bool gameisrunning);
	void Gravity(RenderWindow& window);

private:
	float m_playerX;
	float m_playerY;
	float s, g;

	int indexReadTab;

	bool stop;

	vector<int> tab;
};