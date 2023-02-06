#include "Player.h"
#include "BrickMoveR.h"
#include "BrickMoveL.h"

Player::Player()
{
	m_playerX = 960.0;
	m_playerY = 100.0;

	g = 0;
	s = 0;
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
	if (this->getGlobalBounds().intersects(m_rect.getGlobalBounds()))
	{
		g = 0;
	}

	sf::Vector2f gravity(s,g);

	g += 0.2;

	this->move(gravity);

	//Vector2f posPlayer = this->Transformable::getPosition();
	//std::cout << posPlayer.y << std::endl;

	std::cout << "Gravite : " << g << std::endl;
	
	window.draw(*this);
}

void Player::Collider()
{
	
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
		std::cout << i << std::endl;
		switch (tab[i])
		{
		case 1 :
			this->move(Vector2f(33.0, 0.0));
			std::cout << "Tu vas à droite" << std::endl;
			break;
		case 2 : 
			this->move(Vector2f(-33.0, 0.0));
			std::cout << "Tu vas à gauche" << std::endl;
			break;		
		case 3 :
			this->move(Vector2f(0.0, -33.0));
			std::cout << "Tu Sautes" << std::endl;
			break;
		case 4 : 
			this->move(Vector2f(32.0, -33.0));
			std::cout << "Tu saute en avant" << std::endl;
			break;
		default:
			break;
		}
	}
	for (auto& i : tab)
	{
		i = 0;
	}
}

void Player::DrawPlayer(sf::RenderWindow& window)
{
	window.draw(m_rect);
}