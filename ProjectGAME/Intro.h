#pragma once
#include "BaseState.h"
#include"Game.h"
#include"SFML/Graphics.hpp"
class Intro : public BaseState{
public:
	Intro(GameProperty property);
	~Intro();
	void initalize();
	void update();
	void Draw();
	void Handle();
private:
	GameProperty _IntroProperty;
	sf::Clock _Clock;
	sf::Sprite _SplashBackGround;

};

