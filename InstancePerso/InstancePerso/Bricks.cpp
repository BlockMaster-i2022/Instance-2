#include "Bricks.h"
#include "Player.h"

Bricks::Bricks(Player* player)
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

	sfp::PhysicsRectangle m_player;

	m_printOne = false;

	m_PosBricksX = 10.0;
	m_PosBricksY = 925.0;

	RectangleShape m_RightMove;
	Texture m_textureRightMove;

	RectangleShape m_LeftMove;
	Texture m_textureLeftMove;

	RectangleShape m_JumpMove;
	Texture m_textureJumpMove;

	RectangleShape m_JumpFMove;
	Texture m_textureJumpFMove;

	i = 0;
	posX = 10.0;

	p = player;
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

	sfp::PhysicsRectangle m_player;

	m_printOne;

	m_PosBricksX;
	m_PosBricksY;

	m_GameIsRunning = false;
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
	//CATCH AN OBJECT
	if (mousePos.x > 847 && mousePos.x < 988 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique attraper un objet" << std::endl;
		}
	}
	//THROW AN OBJECT
	if (mousePos.x > 1047 && mousePos.x < 1188 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique lancer un objet" << std::endl;
		}
	}
}

int Bricks::SystemeMoveL(Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (!m_textureLeftMove.loadFromFile("assets/Left.png"))
		std::cout << "Fail to load Left.png" << std::endl;

	m_LeftMove.setSize(Vector2f(200.0, 75.0));
	m_LeftMove.setTexture(&m_textureLeftMove);
	m_LeftMove.setPosition(Vector2f(posX, 925.0));

	if (mousePos.x > 247 && mousePos.x < 388 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			posX += 165.0;
			drawSprite.push_back(m_LeftMove);
			return 2;
		}
	}

	return 0;
}
int Bricks::SystemeMoveR(Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (!m_textureRightMove.loadFromFile("assets/Right.png"))
		std::cout << "Fail to load Right.png" << std::endl;

	m_RightMove.setSize(Vector2f(200.0, 75.0));
	m_RightMove.setTexture(&m_textureRightMove);
	m_RightMove.setPosition(Vector2f(posX, 925.0));

	if (mousePos.x > 47 && mousePos.x < 188 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			posX += 165.0;
			drawSprite.push_back(m_RightMove);
			return 1;
		}
	}
	return 0;
}

bool Bricks::SystemRun(sf::Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (mousePos.x > 1797 && mousePos.x < 1893 && mousePos.y > 846 && mousePos.y < 892)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			std::cout << "Tu clique sur la brique run" << std::endl;
			p->tabRead();
		}
	}

	return false;
}



int Bricks::SystemMoveJ(Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (!m_textureJumpMove.loadFromFile("assets/Jump.png"))
		std::cout << "Fail to load Jump.png" << std::endl;

	m_JumpMove.setSize(Vector2f(200.0, 75.0));
	m_JumpMove.setTexture(&m_textureJumpMove);
	m_JumpMove.setPosition(Vector2f(posX, 925.0));

	if (mousePos.x > 447 && mousePos.x < 588 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			posX += 165.0;
			drawSprite.push_back(m_JumpMove);
			return 3;
		}
	}
	return 0;
}

int Bricks::SystemMoveJF(Event event)
{
	Vector2i mousePos = Mouse::getPosition();

	if (!m_textureJumpFMove.loadFromFile("assets/JumpForward.png"))
		std::cout << "Fail to load JumpForward.png" << std::endl;

	m_JumpFMove.setSize(Vector2f(200.0, 75.0));
	m_JumpFMove.setTexture(&m_textureJumpFMove);
	m_JumpFMove.setPosition(Vector2f(posX, 925.0));

	if (mousePos.x > 647 && mousePos.x < 788 && mousePos.y > 855 && mousePos.y < 930)
	{
		if (event.mouseButton.button == sf::Mouse::Left)
		{
			posX += 165.0;
			drawSprite.push_back(m_JumpFMove);
			return 4;
		}
	}

	return 0;
}

void Bricks::DrawTab(RenderWindow& window)
{
	for (auto& sprite : drawSprite)
	{
		window.draw(sprite);
	}
}