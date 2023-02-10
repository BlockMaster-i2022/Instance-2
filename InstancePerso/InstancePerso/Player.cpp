#include "Player.h"

Player::Player()
{
	sf::Texture m_PlayerTexture;
	m_playerX = 960.0;
	m_playerY = 100.0;

	indexReadTab = 0;

	g = 0;
	s = 0;

	stop = false;
	sf::RectangleShape m_rect;
	m_rectX = 0.0;
	m_rectY = 480.0;
}

Player::~Player()
{
	sf::Texture m_PlayerTexture;
	m_playerX;
	m_playerY;
	sf::RectangleShape m_rect;
}

void Player::CreatePlayer()
{
	this->setSize(sf::Vector2f(32.0, 32.0));
	this->setPosition(sf::Vector2f(m_playerX, m_playerY));

	m_rect.setSize(sf::Vector2f(3000, 20));
	m_rect.setPosition(sf::Vector2f(m_rectX, m_rectY));
}

void Player::Gravity(RenderWindow& window)
{
	sf::Vector2f gravity(s,g);

	g += 0.1;

	if (this->getGlobalBounds().intersects(m_rect.getGlobalBounds()))
	{
		g = 0;
	}


	this->move(gravity);

	if (!m_PlayerTexture.loadFromFile("assets/Player.png"))
		std::cout << "Fail to load ennemie.png" << std::endl;

	this->setTexture(&m_PlayerTexture);
	this->setPosition(sf::Vector2f(this->getPosition().x, this->getPosition().y));

	window.draw(m_rect);
	window.draw(*this);
}

void Player::createTab(int index)
{
	tab.push_back(index);
	std::cout << index << " index:";
	std::cout << tab.size() << std::endl;
}

void Player::tabRead()
{
	std::cout << tab.size() << std::endl;
	
	for (int i = 0; i < tab.size(); i++)
	{
		switch (tab[i])
		{
		case 1:
			this->move(Vector2f(33.0, 0.0));
			std::cout << "Tu vas à droite" << std::endl;
			break;
		case 2:
			this->move(Vector2f(-33.0, 0.0));
			std::cout << "Tu vas à gauche" << std::endl;
			break;
		case 3:
			this->move(Vector2f(0.0, -33.0));
			std::cout << "Tu Sautes" << std::endl;
		case 4:
			this->move(Vector2f(32.0, -33.0));
			std::cout << "Tu saute en avant" << std::endl;
			break;
		default:
			break;
		}
	}
}