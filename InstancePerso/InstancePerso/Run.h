#pragma once
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>
#include "Player.h"

class Run
{
public : 
	Run(Player* player);
	~Run();
	bool systemRun(sf::Event event);
private : 
	Player* p;
};

