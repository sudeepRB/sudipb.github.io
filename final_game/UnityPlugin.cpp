
// Sample Unity C++ Plugin for Game Mechanics
#include "pch.h"
#include <cmath>


extern "C" {



    // Function to calculate player movement based on velocity and direction
    __declspec(dllexport) void calculateMovement(float* xPos, float* yPos, float velocity, float direction) {
        *xPos += velocity * cos(direction);
        *yPos += velocity * sin(direction);
    }

    // Function to detect collision between player and object
    __declspec(dllexport) bool checkCollision(float playerX, float playerY, float objectX, float objectY, float radius) {
        float distance = sqrt(pow(objectX - playerX, 2) + pow(objectY - playerY, 2));
        return distance <= radius;
    }

    // Function to update score based on events
    __declspec(dllexport) int updateScore(int currentScore, int points) {
        return currentScore + points;
    }
}
