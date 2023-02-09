#pragma once
#include "SFPhysics.h"
#include "Main.h"


// A big thank you to Anaïs JOURDANNAUD for her help on the global understanding of level management ^^

class Levels
{
protected:
	bool m_isPlaying = true;

	//sfp::PhysicsRectangle m_map;
	//sf::Texture m_mapTexture;

public:
	Levels();
	~Levels();

	// Function to set up objects
	virtual void drawLevel(RenderWindow &window, bool debugMode) = 0;

	// Function to assign a physics to an object
	virtual void setPhysics(sfp::World &window) = 0;

	// Function to make enemies "move", "interact", or objects such as keys
	virtual void updateLevel() = 0;

	//virtual void mapSetup() = 0;
};

