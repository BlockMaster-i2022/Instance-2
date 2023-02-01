#include "Bricks.h"

Bricks::Bricks()
{
	sf::Sprite m_OnMoveRight;
	sf::Sprite m_firstBrick;
	sf::Sprite m_Run;

	sf::Texture m_textureFirstBrick;
	sf::Texture m_textureOnMoveRight;
	sf::Texture m_textureRun;

	m_printOne = false;

	m_PosBricksX = 10.0;
	m_PosBricksY = 950.0;
}

Bricks::~Bricks()
{
	sf::Sprite m_OnMoveRight;
	sf::Sprite m_firstBrick;
	sf::Sprite m_Run;

	sf::Texture m_textureOnMoveRight;
	sf::Texture m_textureFirstBrick;
	sf::Texture m_textureRun;

	m_printOne = false;

	m_PosBricksX = 10.0;
	m_PosBricksY = 950.0;
}

void Bricks::DisplayBricks()
{
	// right step brick
	if (!m_textureOnMoveRight.loadFromFile("assets/Right.png"))
		std::cout << "Fail to load Right.png" << std::endl;

	m_OnMoveRight.setTexture(m_textureOnMoveRight);
	m_OnMoveRight.setPosition(sf::Vector2f(10.0, 50.0));

	//position of bricks
	if (!m_textureFirstBrick.loadFromFile("assets/greyBricks.png"))
		std::cout << "Fail to load greyBricks.png";

	m_firsBrick.setTexture(m_textureFirstBrick);
	m_firsBrick.setPosition(sf::Vector2f(m_PosBricksX, m_PosBricksY));
}

void Bricks::DrawSystemBricks(sf::RenderWindow& window)
{
	window.draw(m_OnMoveRight);
	window.draw(m_firsBrick);
}

void Bricks::systemBricks(sf::RenderWindow& window, sf::Event event)
{
	Vector2f PosRightBrick = m_OnMoveRight.sf::Transformable::getPosition();
	Vector2f PosFirstBrick = m_firsBrick.sf::Transformable::getPosition();
	Vector2i mousePos = Mouse::getPosition();

	if (m_printOne == false)
	{
		std::cout << PosRightBrick.x << std::endl;
		std::cout << PosRightBrick.y << std::endl;
		m_printOne = true;
	}

	if (mousePos.x > 54 && mousePos.x < 230 && mousePos.y > 75 && mousePos.y < 175)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brick faire un pas à droite" << std::endl;
		}
	}
}