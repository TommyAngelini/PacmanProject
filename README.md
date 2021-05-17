# Pacman Project
### About this project
This project was developed to apply the concepts and frameworks I've been learning about Unreal Engine 4 this week. After watching several tutorials and looking through Unreal's documentation, I was able to develop a simple Pacman emulator using a combination of C++, Blueprints, and UMG. 

![PacmanProjectSnapshot](https://user-images.githubusercontent.com/43976942/118484174-c7b3d580-b6cb-11eb-9830-3a79b187640c.png)
> A snapshot of the beginning of the level

### Concepts applied
- Navigating the world outliner, world settings, and content browser for quick editing of levels
- Using C++ to set up actor classes and program user input into pawn movement 
- Connecting variables and data members to Blueprints through C++ using "UPROPERTY"
- Creating custom Gamemodes for the main menu and Pacman level 
- Creating functions to call in the Event Graph
- Creating custom events using "publish-subscribe" in C++/blueprints to handle changes such as pellets being consumed by Pacman
- Using UMG to design a main menu with "Play", "Credits", and "Quit" functionality 
- Using UMG to create a simple HUD displaying the player's progress in the game, as well as an icon indicating a powerup being active
- Using behavior trees to model the ghosts' movement around the maze 
- Using blackboards to create keys for the ghosts' behavior trees
- Using EQS queries for more sophisticated patroling of ghosts around the maze 
- Setting up multiple enemy AI controllers with different behavior trees to vary behavior amongst ghosts

![PacmanProjectBlueprints](https://user-images.githubusercontent.com/43976942/118484273-e4e8a400-b6cb-11eb-88a3-9aa0f715a7e4.PNG)
> Part of an Event Graph blueprint for one of the Enemy ghosts

### What's in this Github repo
This Github repo contains all of the necessary files to access this project on Unreal Engine 4. In order to test the project's full functionality through PIE mode, select "MainMenuLevel" inside Content/Pacman/Levels to start in the Main Menu.

### Reflections
I learned a lot over the last few days about Unreal Engine, and one of the aspects of the engine that most fascinated me was the Behavior tree framework and the ability to create sequences of behavior with such ease. This was one of the last features I was able to spend time on, so I'm certain I'm scratching the surface when it comes to modeling AI behavior (especially using EQS queries!). Overall, this was a great learning experience and I had a ton of fun building up this project, despite the somewhat steep learning curve and mysterious bugs that would arise.

![CreditsScreenshot](https://user-images.githubusercontent.com/43976942/118484373-fe89eb80-b6cb-11eb-82e6-40127d9344cd.PNG)
> Credits 
