#include "enemies.h"

enemies::enemies()
{
	//Bool of enemies movement
	MoveR = false;
	MoveL = false;

	sf::Texture m_enemiesTextures;

	//Ground
	sf::RectangleShape m_rect;
	m_rectX = 0.0;
	m_rectY = 490.0;

	//Gravity
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
	//enemies pos and size
	this->setSize(sf::Vector2f(40.0, 40.0));
	this->setPosition(sf::Vector2f(spawnX, spawnY));

	m_rect.setSize(sf::Vector2f(3000, 20));
	m_rect.setPosition(sf::Vector2f(m_rectX, m_rectY));
}

void enemies::GravityE(sf::RenderWindow& window, float maxL, float maxR)
{
	//Gravity
	sf::Vector2f gravity(s, g);
	g += 0.1;
	//Is grounded?
	if (this->getGlobalBounds().intersects(m_rect.getGlobalBounds()))
	{
		g = 0;
	}
	this->move(gravity);

	//texture load
	if (!m_enemiesTextures.loadFromFile("assets/enemie.png"))
		std::cout << "Fail to load ennemie.png" << std::endl;

	this->setTexture(&m_enemiesTextures);
	this->setPosition(sf::Vector2f(this->getPosition().x, this->getPosition().y));
 
	//Movement check Pos
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

	//draw
	window.draw(m_rect);
	window.draw(*this);
}
