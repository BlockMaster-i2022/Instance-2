#include "Player.h"

Player::Player()
{
	sf::RectangleShape m_player;

	m_playerX = 960.0;
	m_playerY = 540.0;
}

Player::~Player()
{
	sf::RectangleShape m_player;
}

void Player::CreatePlayer()
{
	m_player.setSize(sf::Vector2f(50.0, 50.0));
	m_player.setPosition(sf::Vector2f(m_playerX, m_playerY));
}

void Player::DrawPlayer(sf::RenderWindow& window)
{
	window.draw(m_player);
}