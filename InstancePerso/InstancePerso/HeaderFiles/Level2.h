#pragma once
#include "Levels.h"
#include "SFPhysics.h"


class Level2 : public Levels
{
private:
	// Creation of all the ground colliders
	sfp::PhysicsRectangle m_groundCollider;
	sfp::PhysicsRectangle m_groundCollider1;
	sfp::PhysicsRectangle m_groundCollider2;
	sfp::PhysicsRectangle m_groundCollider3;
	sfp::PhysicsRectangle m_groundCollider4;
	sfp::PhysicsRectangle m_groundCollider5;
	sfp::PhysicsRectangle m_groundCollider6;
	sfp::PhysicsRectangle m_groundCollider7;
	sfp::PhysicsRectangle m_groundCollider8;
	sfp::PhysicsRectangle m_groundCollider9;
	sfp::PhysicsRectangle m_groundCollider10;
	sfp::PhysicsRectangle m_groundCollider11;
	sfp::PhysicsRectangle m_groundCollider12;
	sfp::PhysicsRectangle m_groundCollider13;
	sfp::PhysicsRectangle m_groundCollider14;
	sfp::PhysicsRectangle m_groundCollider15;
	// Flying collisions  
	sfp::PhysicsRectangle m_groundCollider16;
	sfp::PhysicsRectangle m_groundCollider17;
	sfp::PhysicsRectangle m_groundCollider18;
	sfp::PhysicsRectangle m_groundCollider19;
	sfp::PhysicsRectangle m_groundCollider20;
	sfp::PhysicsRectangle m_groundCollider21;
	sfp::PhysicsRectangle m_groundCollider22;
	sfp::PhysicsRectangle m_groundCollider23;
	sfp::PhysicsRectangle m_groundCollider24;
	// Borders of map
	sfp::PhysicsRectangle m_borderLeft;
	sfp::PhysicsRectangle m_borderRight;


public:
	Level2();
	~Level2();

	// Function to set up objects
	void drawLevel(RenderWindow& window, bool debugMode) override;

	// Function to assign a physics to an object
	void setPhysics(sfp::World& window) override;

	// Function to make enemies "move", "interact", or objects such as keys
	void updateLevel() override;

	//void mapSetup() override;
};
