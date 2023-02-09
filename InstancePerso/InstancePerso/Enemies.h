#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class enemies
	: public sf::RectangleShape
{
public:
	enemies();
	~enemies();

	//debug 
	sf::RectangleShape m_rect;

	void createEnemies(float spawnX, float spawnY);
	void GravityE(sf::RenderWindow& window, float maxL, float maxR);

private:
	sf::Texture m_enemiesTextures;

	bool MoveR;
	bool MoveL;

	float m_rectX;
	float m_rectY;

	float s, g;
};