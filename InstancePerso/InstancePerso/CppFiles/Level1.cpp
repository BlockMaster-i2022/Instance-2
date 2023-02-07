#include "../HeaderFiles/Level1.h"
#include "../HeaderFiles/Fonctions.h"

// Creation and configuration of all the ground colliders
Level1::Level1()
{
    RectangleConfiguration(m_groundCollider, 90, 452, 186, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider1, 300, 470, 234, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider2, 484, 452, 134, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider3, 668, 435, 234, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider4, 842, 434, 114, 374, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider5, 956, 434, 114, 340, sf::Color(255, 0, 0, 50), true);
}

// Display of created objects
void Level1::drawLevel(RenderWindow &window)
{
    window.draw(m_groundCollider);
    window.draw(m_groundCollider1);
    window.draw(m_groundCollider2);
    window.draw(m_groundCollider3);
    window.draw(m_groundCollider4);
    window.draw(m_groundCollider5);
}

// Adding a physics on the interactable objects
void Level1::setPhysics(sfp::World &window)
{
    window.AddPhysicsBody(m_groundCollider);
    window.AddPhysicsBody(m_groundCollider1);
    window.AddPhysicsBody(m_groundCollider2);
    window.AddPhysicsBody(m_groundCollider3);
    window.AddPhysicsBody(m_groundCollider4);
    window.AddPhysicsBody(m_groundCollider5);
}

// Function to make enemies "move", "interact", or objects such as keys
void Level1::updateLevel()
{

}

Level1::~Level1()
{

}