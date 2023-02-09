#include "../HeaderFiles/Level1.h"
#include "../HeaderFiles/Fonctions.h"

// Creation and configuration of all the ground colliders
Level1::Level1()
{
    /*Levels* m_level2 = new Level2;*/
    RectangleConfiguration(m_groundCollider, 90, 452, 186, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider1, 300, 470, 234, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider2, 484, 452, 134, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider3, 668, 435, 234, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider4, 842, 434, 114, 374, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider5, 956, 434, 114, 340, sf::Color(255, 0, 0, 50), true);
    // Borders of map
    RectangleConfiguration(m_borderLeft, -9, 176, 17, WIN_Y, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_borderRight, WIN_X + 9, 176, 17, WIN_Y, sf::Color(255, 0, 0, 50), true);
    // Win flag
    RectangleConfiguration(m_flag, 960, 247, 18, 35, sf::Color(0, 255, 0, 150), true);
}

// Display of created objects
void Level1::drawLevel(RenderWindow &window, bool debugMode)
{
    // Display of collisions
    if (debugMode == true)
    {
        window.draw(m_groundCollider);
        window.draw(m_groundCollider1);
        window.draw(m_groundCollider2);
        window.draw(m_groundCollider3);
        window.draw(m_groundCollider4);
        window.draw(m_groundCollider5);

        window.draw(m_borderLeft);
        window.draw(m_borderRight);

        window.draw(m_flag);
    }
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

    window.AddPhysicsBody(m_borderLeft);
    window.AddPhysicsBody(m_borderRight);

    window.AddPhysicsBody(m_flag);
}

//void Level1::mapSetup()
//{
//
//}

// Function to make enemies "move", "interact", or objects such as keys
void Level1::updateLevel()
{

}

Level1::~Level1()
{

}

