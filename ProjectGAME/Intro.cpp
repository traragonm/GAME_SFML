#include "Intro.h"
Intro::Intro(GameProperty property) {
	_IntroProperty = property;
	std::cout << "Intro created" << std::endl;
	//initalize();
}
Intro::~Intro() {
	std::cout << "Intro destroy" << std::endl;
}
void Intro::initalize() {
	_IntroProperty->_loadM.LoadTexture("inverse.png");
	_SplashBackGround.setTexture(_IntroProperty->_loadM.GetTexture("inverse.png"));
}
void Intro::Handle() {
	sf::Event event;
	while (_IntroProperty->_window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			_IntroProperty->_window.close();
		}
	}
}
void Intro::update() {
	
}
void Intro::Draw() {
	_IntroProperty->_window.clear();
	_IntroProperty->_window.draw(_SplashBackGround);
	_IntroProperty->_window.display();
}
