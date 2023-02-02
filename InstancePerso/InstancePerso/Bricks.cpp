#include "Bricks.h"

Bricks::Bricks()
{
	sf::Sprite m_OnMoveRight;
	sf::Sprite m_OnMoveLeft;
	sf::Sprite m_Jump;
	sf::Sprite m_JumpForward;
	sf::Sprite m_CatchObject;
	sf::Sprite m_ThrowObject;
	sf::Sprite m_firstBrick;
	sf::Sprite m_Run;
	sf::Sprite m_Map;

	sf::Texture m_textureOnMoveRight;	
	sf::Texture m_textureOnMoveLeft;
	sf::Texture m_textureJump;
	sf::Texture m_textureJumpForward;
	sf::Texture m_textureCatchObject;
	sf::Texture m_textureThrowObject;
	sf::Texture m_textureFirstBrick;
	sf::Texture m_textureRun;
	sf::Texture m_textureMap;

	m_printOne = false;

	m_PosBricksX = 10.0;
	m_PosBricksY = 925.0;
}

Bricks::~Bricks()
{
	sf::Sprite m_OnMoveRight;
	sf::Sprite m_OnMoveLeft;
	sf::Sprite m_Jump;
	sf::Sprite m_JumpForward;
	sf::Sprite m_CatchObject;
	sf::Sprite m_ThrowObject;
	sf::Sprite m_firstBrick;
	sf::Sprite m_Run;
	sf::Sprite m_Map;

	sf::Texture m_textureOnMoveRight;
	sf::Texture m_textureOnMoveLeft;
	sf::Texture m_textureJump;
	sf::Texture m_textureJumpForward;
	sf::Texture m_textureCatchObject;
	sf::Texture m_textureThrowObject;
	sf::Texture m_textureFirstBrick;
	sf::Texture m_textureRun;
	sf::Texture m_textureMap;

	m_printOne;

	m_PosBricksX;
	m_PosBricksY;
}

void Bricks::DisplayBricks()
{
	//MAP
	if (!m_textureMap.loadFromFile("assets/map.png"))
		std::cout << "Fail to load map.png" << std::endl;

	m_Map.setTexture(m_textureMap);
	m_Map.setPosition(Vector2f(0.0, 0.0));

	//ON MOVE RIGHT
	if (!m_textureOnMoveRight.loadFromFile("assets/Right.png"))
		std::cout << "Fail to load Right.png" << std::endl;

	m_OnMoveRight.setTexture(m_textureOnMoveRight);
	m_OnMoveRight.setPosition(sf::Vector2f(10.0, 825.0));
	//ON MOVE LEFT
	if (!m_textureOnMoveLeft.loadFromFile("assets/Left.png"))
		std::cout << "Fail to load Left.png" << std::endl;

	m_OnMoveLeft.setTexture(m_textureOnMoveLeft);
	m_OnMoveLeft.setPosition(sf::Vector2f(210.0, 825.0));
	//JUMP
	if (!m_textureJump.loadFromFile("assets/Jump.png"))
		std::cout << "Fail to load Jump.png" << std::endl;
	
	m_Jump.setTexture(m_textureJump);
	m_Jump.setPosition(sf::Vector2f(410.0, 825.0));
	//JUMP FORWARD
	if (!m_textureJumpForward.loadFromFile("assets/JumpForward.png"))
		std::cout << "Fail to load JumpForward.png" << std::endl;

	m_JumpForward.setTexture(m_textureJumpForward);
	m_JumpForward.setPosition(sf::Vector2f(610.0, 825.0));
	//CATCH AN OBJECT
	if (!m_textureCatchObject.loadFromFile("assets/CatchObject.png"))
		std::cout << "Fail to load CatchObject.png" << std::endl;

	m_CatchObject.setTexture(m_textureCatchObject);
	m_CatchObject.setPosition(sf::Vector2f(810.0, 825.0));
	//THROW AN OBJECT 
	if (!m_textureThrowObject.loadFromFile("assets/ThrowObject.png"))
		std::cout << "Fail to load ThrowObject.png" << std::endl;

	m_ThrowObject.setTexture(m_textureThrowObject);
	m_ThrowObject.setPosition(Vector2f(1010.0, 825.0));
	//RUN
	if (!m_textureRun.loadFromFile("assets/Run.png"))
		std::cout << "Fail to load Run" << std::endl;
	
	m_Run.setTexture(m_textureRun);
	m_Run.setPosition(Vector2f(1760.0, 815.0));
	
	//VISUALIZATION FIRST BRICK
	if (!m_textureFirstBrick.loadFromFile("assets/greyBricks.png"))
		std::cout << "Fail to load greyBricks.png";

	m_firsBrick.setTexture(m_textureFirstBrick);
	m_firsBrick.setPosition(sf::Vector2f(m_PosBricksX, m_PosBricksY));
}

void Bricks::DrawSystemBricks(sf::RenderWindow& window)
{
	window.draw(m_Map);
	window.draw(m_OnMoveRight);
	window.draw(m_OnMoveLeft);
	window.draw(m_Jump);
	window.draw(m_JumpForward);
	window.draw(m_CatchObject);
	window.draw(m_ThrowObject);
	window.draw(m_firsBrick);
	window.draw(m_Run);
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

	if (mousePos.x > 47 && mousePos.x < 188 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brick faire un pas a droite" << std::endl;
		}		
	}

	if (mousePos.x > 247 && mousePos.x < 388 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique faire un pas a gauche" << std::endl;
		}
	}

	if (mousePos.x > 447 && mousePos.x < 588 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique sauter sur place" << std::endl;
		}
	}

	if (mousePos.x > 647 && mousePos.x < 788 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique sauter en avant" << std::endl;
		}
	}

	if (mousePos.x > 847 && mousePos.x < 988 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique attraper un objet" << std::endl;
		}
	}

	if (mousePos.x > 1047 && mousePos.x < 1188 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique lancer un objet" << std::endl;
		}
	}
}