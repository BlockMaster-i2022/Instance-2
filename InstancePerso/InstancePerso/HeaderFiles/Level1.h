#pragma once
#include "Levels.h"
#include "SFPhysics.h"
#include "Level2.h"

class Level1 : public Levels
{
private:
	//
	/*Levels* m_level2;*/
	
	// Creation of all the ground colliders
	sfp::PhysicsRectangle m_groundCollider;
	sfp::PhysicsRectangle m_groundCollider1;
	sfp::PhysicsRectangle m_groundCollider2;
	sfp::PhysicsRectangle m_groundCollider3;
	sfp::PhysicsRectangle m_groundCollider4;
	sfp::PhysicsRectangle m_groundCollider5;
	// Borders of map
	sfp::PhysicsRectangle m_borderLeft;
	sfp::PhysicsRectangle m_borderRight;
	// Win flag
	sfp::PhysicsRectangle m_flag;

public:
	Level1();
	~Level1();

	// Function to set up objects
	void drawLevel(RenderWindow& window, bool debugMode) override;

	// Function to assign a physics to an object
	void setPhysics(sfp::World &window) override;

	// Function to make enemies "move", "interact", or objects such as keys
	void updateLevel() override;

	//void mapSetup() override;
};
