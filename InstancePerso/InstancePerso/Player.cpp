#include "Player.h"

Player::Player()
{
	m_playerX = 960.0;
	m_playerY = 100.0;

	indexReadTab = 0;

	g = 0;
	s = 0;

	stop = false;

	tab = vector<int>(15);
	for (int i = 0; i <= 14; i++)
	{
		tab[i] = 0;
	}
}


Player::~Player()
{
	m_playerX;
	m_playerY;
}

void Player::CreatePlayer()
{
	this->setSize(sf::Vector2f(32.0, 32.0));
	this->setPosition(sf::Vector2f(m_playerX, m_playerY));
}

void Player::Gravity(RenderWindow& window)
{
	sf::Vector2f gravity(s,g);

	g += 0;

	this->move(gravity);
	
	window.draw(*this);
}

void Player::createTab(int index)
{
//	tab.push_back(index);
	std::cout << index << " index:";
	std::cout << tab.size() << std::endl;
}

void Player::tabRead(bool gameisrunning)
{
	std::cout << tab.size() << std::endl;
	
		switch (tab[indexReadTab])
		{
		case 0:
			gameisrunning = false;
			break;
		case 1:
			this->move(Vector2f(33.0, 0.0));
			gameisrunning = true;
			std::cout << "Tu vas à droite" << std::endl;
			break;
		case 2:
			this->move(Vector2f(-33.0, 0.0));
			gameisrunning = true;
			std::cout << "Tu vas à gauche" << std::endl;
			break;
		case 3:
			this->move(Vector2f(0.0, -33.0));
			std::cout << "Tu Sautes" << std::endl;
		case 4:
			this->move(Vector2f(32.0, -33.0));
			gameisrunning = true;
			std::cout << "Tu saute en avant" << std::endl;
			break;
		default:
			break;
		}
		indexReadTab++;
		std::cout << gameisrunning << std::endl;
}