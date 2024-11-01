
# Unity C++ Game Project with Native C++ Integration

This project demonstrates a Unity-based game with C++ elements, showcasing core programming skills in game mechanics such as movement, collision detection, and score management. Originally developed in 2017, the game has been updated to highlight the use of C++ in handling crucial aspects of gameplay through a native plugin.

## Project Overview
This game is a basic 2D game that includes:
- Player movement and interaction with objects in the environment.
- Collision detection for objects and game boundaries.
- Scoring system to reward the player for specific actions.

### Key C++ Functions in the Plugin

The C++ plugin includes three main functions that simulate essential game mechanics:

1. **calculateMovement**: Calculates the player's position based on velocity and direction.
   ```cpp
   void calculateMovement(float* xPos, float* yPos, float velocity, float direction);
   ```

2. **checkCollision**: Detects collision between the player and an object, which is crucial for interaction within the game.
   ```cpp
   bool checkCollision(float playerX, float playerY, float objectX, float objectY, float radius);
   ```

3. **updateScore**: Updates the player's score, rewarding them for achievements or interactions.
   ```cpp
   int updateScore(int currentScore, int points);
   ```

### Getting Started

#### 1. Clone the Repository
   ```bash
   git clone <repository-url>
   ```

#### 2. Compile the C++ Plugin

To enable C++ functions, compile `UnityPlugin.cpp` into a dynamic library (DLL) for Windows:

1. Open **Visual Studio** and create a new **Dynamic-Link Library (DLL)** project.
2. Add `UnityPlugin.cpp` to the project.
3. Build the project to generate `UnityPlugin.dll`, usually located in the **Release** folder.

#### 3. Integrate the Plugin in Unity
- Move `UnityPlugin.dll` to the `Assets/Plugins` folder in your Unity project.
- Use the following `DllImport` calls in your Unity C# scripts to call C++ functions directly:

   ```csharp
   [DllImport("UnityPlugin")]
   private static extern void calculateMovement(ref float xPos, ref float yPos, float velocity, float direction);

   [DllImport("UnityPlugin")]
   private static extern bool checkCollision(float playerX, float playerY, float objectX, float objectY, float radius);

   [DllImport("UnityPlugin")]
   private static extern int updateScore(int currentScore, int points);
   ```

#### 4. Open the Project in Unity
   - Open Unity, select "Open Project," and navigate to the folder containing this project.
   - Open the project in Unity to review, modify, or test.

#### 5. Run the Game
   - Use the Unity editor to open `index.html` or run the game in **Play** mode to preview it.

### Additional Information

- **Platform**: Web-based Unity game
- **Languages**: C++ and JavaScript
- **Unity Version**: 2017 or later

This project provides a comprehensive example of using C++ in game development, with core functionality to handle in-game events and player interactions.
