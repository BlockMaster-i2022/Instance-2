#include "Player.h"
#include "BrickMoveR.h"
#include "BrickMoveL.h"

Player::Player()
{
	sfp::PhysicsRectangle m_player;

	m_playerX = 960.0;
	m_playerY = 540.0;
}

Player::~Player()
{
	sfp::PhysicsRectangle m_player;
}

void Player::CreatePlayer()
{
	m_player.setSize(sf::Vector2f(32.0, 32.0));
	m_player.setCenter(sf::Vector2f(m_playerX, m_playerY));
	m_player.setStatic(true);
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
			m_playerX += 32;
			m_player.setCenter(sf::Vector2f(m_playerX, m_playerY));
			std::cout << "Tu vas à droite" << std::endl;
			break;
		case 2 : 
			m_playerX -= 32;
			m_player.setCenter(sf::Vector2f(m_playerX, m_playerY));
			std::cout << "Tu vas à gauche" << std::endl;
			break;		
		case 3 :  
			m_playerY -= 32;
			m_player.setCenter(sf::Vector2f(m_playerX, m_playerY));
			std::cout << "Tu Sautes" << std::endl;
			break;
		case 4 : 
			m_playerY -= 32;
			m_playerX += 32;
			m_player.setCenter(sf::Vector2f(m_playerX, m_playerY));
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
	window.draw(m_player);
}