#pragma once
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

class BrickMoveR
{
private:
	sf::Texture m_OnTMoveRight;
	sf::Sprite m_OnMoveRight;

public:
	BrickMoveR();
	~BrickMoveR();
	void displayBrickMoveR();
	void drawBrickMoveR(sf::RenderWindow& window);
	void SystemeMoveR();

};

