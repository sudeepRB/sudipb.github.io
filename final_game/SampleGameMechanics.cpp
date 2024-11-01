
// Sample C++ functions to demonstrate game mechanics for Unity Game

#include <iostream>
#include <vector>

// Function to calculate player movement based on velocity and direction
void calculateMovement(float& xPos, float& yPos, float velocity, float direction) {
    xPos += velocity * cos(direction);
    yPos += velocity * sin(direction);
    std::cout << "Player position updated to (" << xPos << ", " << yPos << ")" << std::endl;
}

// Function to detect collision between player and object
bool checkCollision(float playerX, float playerY, float objectX, float objectY, float radius) {
    float distance = sqrt(pow(objectX - playerX, 2) + pow(objectY - playerY, 2));
    return distance <= radius;
}

// Function to update score based on events like collecting items or defeating enemies
int updateScore(int currentScore, int points) {
    currentScore += points;
    std::cout << "Score updated! Current score: " << currentScore << std::endl;
    return currentScore;
}

// Example main function to demonstrate the usage of these functions
int main() {
    float playerX = 0.0f, playerY = 0.0f;
    float velocity = 5.0f, direction = 45.0f; // Angle in degrees
    int score = 0;

    // Simulate player movement
    calculateMovement(playerX, playerY, velocity, direction);

    // Check for a collision with an object at (10, 10) with collision radius of 3.0f
    bool collided = checkCollision(playerX, playerY, 10.0f, 10.0f, 3.0f);
    if (collided) {
        std::cout << "Collision detected!" << std::endl;
        score = updateScore(score, 100);  // Award points for collision event
    } else {
        std::cout << "No collision." << std::endl;
    }

    return 0;
}
