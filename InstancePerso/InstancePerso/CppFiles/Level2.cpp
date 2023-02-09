#include "../HeaderFiles/Level2.h"
#include "../HeaderFiles/Fonctions.h"

// Creation and configuration of all the ground colliders
Level2::Level2()
{
    //                                       +34 -18
    RectangleConfiguration(m_groundCollider, 16, 435, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider1, 50, 417, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider2, 84, 399, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider3, 118, 381, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider4, 159, 364, 48, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider5, 192, 522, 17, 374, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider6, 300, 524, 200, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider6, 300, 524, 200, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider7, 417, 506, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider8, 450, 488, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider9, 484, 470, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider10, 517, 453, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider11, 550, 435, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider12, 650, 417, 167, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider13, 784, 399, 100, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider14, 850, 417, 34, 340, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider15, 934, 435, 136, 340, sf::Color(255, 0, 0, 50), true);
    // Flying collisions                       +34  -9      +18
    RectangleConfiguration(m_groundCollider16, 250, 247, 34, 34, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider17, 284, 238, 34, 52, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider18, 318, 229, 34, 70, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider19, 352, 220, 34, 88, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider20, 375, 212, 16, 106, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider21, 440, 194, 120, 70, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider22, 550, 185, 34, 18, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider23, 592, 176, 17, 34, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_groundCollider24, 650, 185, 66, 52, sf::Color(255, 0, 0, 50), true);
    // Borders of map
    RectangleConfiguration(m_borderLeft, -9, 176, 17, WIN_Y, sf::Color(255, 0, 0, 50), true);
    RectangleConfiguration(m_borderRight, WIN_X + 9, 176, 17, WIN_Y, sf::Color(255, 0, 0, 50), true);
}


// Display of created objects
void Level2::drawLevel(RenderWindow& window, bool debugMode)
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
        window.draw(m_groundCollider6);
        window.draw(m_groundCollider7);
        window.draw(m_groundCollider8);
        window.draw(m_groundCollider9);
        window.draw(m_groundCollider10);
        window.draw(m_groundCollider11);
        window.draw(m_groundCollider12);
        window.draw(m_groundCollider13);
        window.draw(m_groundCollider14);
        window.draw(m_groundCollider15);

        window.draw(m_groundCollider16);
        window.draw(m_groundCollider17);
        window.draw(m_groundCollider18);
        window.draw(m_groundCollider19);
        window.draw(m_groundCollider20);
        window.draw(m_groundCollider21);
        window.draw(m_groundCollider22);
        window.draw(m_groundCollider23);
        window.draw(m_groundCollider24);

        window.draw(m_borderLeft);
        window.draw(m_borderRight);
    }
}

// Adding a physics on the interactable objects
void Level2::setPhysics(sfp::World& window)
{
    window.AddPhysicsBody(m_groundCollider);
    window.AddPhysicsBody(m_groundCollider1);
    window.AddPhysicsBody(m_groundCollider2);
    window.AddPhysicsBody(m_groundCollider3);
    window.AddPhysicsBody(m_groundCollider4);
    window.AddPhysicsBody(m_groundCollider5);
    window.AddPhysicsBody(m_groundCollider6);
    window.AddPhysicsBody(m_groundCollider7);
    window.AddPhysicsBody(m_groundCollider8);
    window.AddPhysicsBody(m_groundCollider9);
    window.AddPhysicsBody(m_groundCollider10);
    window.AddPhysicsBody(m_groundCollider11);
    window.AddPhysicsBody(m_groundCollider12);
    window.AddPhysicsBody(m_groundCollider13);
    window.AddPhysicsBody(m_groundCollider14);
    window.AddPhysicsBody(m_groundCollider15);

    window.AddPhysicsBody(m_groundCollider16);
    window.AddPhysicsBody(m_groundCollider17);
    window.AddPhysicsBody(m_groundCollider18);
    window.AddPhysicsBody(m_groundCollider19);
    window.AddPhysicsBody(m_groundCollider20);
    window.AddPhysicsBody(m_groundCollider21);
    window.AddPhysicsBody(m_groundCollider22);
    window.AddPhysicsBody(m_groundCollider23);
    window.AddPhysicsBody(m_groundCollider24);

    window.AddPhysicsBody(m_borderLeft);
    window.AddPhysicsBody(m_borderRight);
}

// Function to make enemies "move", "interact", or objects such as keys
void Level2::updateLevel()
{

}

//void Level2::mapSetup()
//{
//
//}

Level2::~Level2()
{

}