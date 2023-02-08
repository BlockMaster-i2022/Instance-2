#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class enemies
	: public sf::RectangleShape
{
public:
	enemies();
	~enemies();
	sf::RectangleShape m_rect;
	void createEnemies(float spawnX, float spawnY);
	void GravityE(sf::RenderWindow& window, float maxL, float maxR);

private:
	//float m_enemieX;
	//float m_enemieY;

	bool MoveR;
	bool MoveL;

	float m_rectX;
	float m_rectY;

	float s, g;
};