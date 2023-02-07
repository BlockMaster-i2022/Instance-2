#pragma once
#include "SFPhysics.h"

// A big thank you to Anaïs JOURDANNAUD for her help on the global understanding of level management ^^

class Levels
{
protected:
	bool m_isPlaying;

public:
	Levels();
	~Levels();

	// Function to set up objects
	virtual void drawLevel(RenderWindow &window) = 0;

	// Function to assign a physics to an object
	virtual void setPhysics(sfp::World &window) = 0;

	// Function to make enemies "move", "interact", or objects such as keys
	virtual void updateLevel() = 0;
};

