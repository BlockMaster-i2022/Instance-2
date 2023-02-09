#include "enemies.h"

enemies::enemies()
{
	MoveR = false;
	MoveL = false;

	sf::Texture m_enemiesTextures;

	sf::RectangleShape m_rect;
	m_rectX = 0.0;
	m_rectY = 490.0;

	g = 0.0;
	s = 0.0;
}

enemies::~enemies()
{
	sf::RectangleShape m_rect;

	sf::Texture m_enemiesTextures;

	m_rectX;
	m_rectY;

	s, g;
}

void enemies::createEnemies(float spawnX, float spawnY)
{
	this->setSize(sf::Vector2f(40.0, 40.0));
	this->setPosition(sf::Vector2f(spawnX, spawnY));

	m_rect.setSize(sf::Vector2f(3000, 20));
	m_rect.setPosition(sf::Vector2f(m_rectX, m_rectY));
}

void enemies::GravityE(sf::RenderWindow& window, float maxL, float maxR)
{
	if (this->getGlobalBounds().intersects(m_rect.getGlobalBounds()))
	{
		g = 0;
	}

	sf::Vector2f gravity(s, g);

	g += 0.1;

	this->move(gravity);

	if (!m_enemiesTextures.loadFromFile("assets/enemie.png"))
		std::cout << "Fail to load ennemie.png" << std::endl;

	this->setTexture(&m_enemiesTextures);
	this->setPosition(sf::Vector2f(this->getPosition().x, this->getPosition().y));
 
	if (this->getPosition().x <= maxL) {
		MoveR = true;
		MoveL = false;
	}
	if (this->getPosition().x >= maxR) {
		MoveR = false;
		MoveL = true;
	}

	if (MoveR == true) {
		this->move(sf::Vector2f(1, 0));
	}
	if (MoveL == true) {
		this->move(sf::Vector2f(-1, 0));
	}

	window.draw(*this);
	window.draw(m_rect);
}
