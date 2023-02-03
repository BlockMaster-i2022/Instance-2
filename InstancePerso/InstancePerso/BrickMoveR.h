#pragma once
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

class BrickMoveR
{
private:
public:
	BrickMoveR();
	~BrickMoveR();
	int SystemeMoveR(sf::Event event);
};

