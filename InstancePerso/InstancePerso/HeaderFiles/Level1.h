#pragma once
#include "Levels.h"
#include "SFPhysics.h"

class Level1 : public Levels
{
private:
	// Creation of all the ground colliders
	sfp::PhysicsRectangle m_groundCollider;
	sfp::PhysicsRectangle m_groundCollider1;
	sfp::PhysicsRectangle m_groundCollider2;
	sfp::PhysicsRectangle m_groundCollider3;
	sfp::PhysicsRectangle m_groundCollider4;
	sfp::PhysicsRectangle m_groundCollider5;

public:
	Level1();
	~Level1();

	// Function to set up objects
	void drawLevel(RenderWindow& window) override;

	// Function to assign a physics to an object
	void setPhysics(sfp::World &window) override;

	// Function to make enemies "move", "interact", or objects such as keys
	void updateLevel() override;
};
