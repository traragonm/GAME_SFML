#pragma once
#include"InputManager.h"
#include"LoadManager.h"
#include"StateManager.h"
#include"SFML/Graphics.hpp"
struct Property
{
	InputManager _inputM;
	LoadManager _loadM;
	StateManager _stateM;
	sf::RenderWindow _window;
};
typedef std::shared_ptr<Property> GameProperty;
class Game
{
public:
	Game(unsigned int width, unsigned int height, std::string title);
	~Game();
	
private:
	GameProperty _GameProperty = std::make_shared<Property>();
	void run();
};

