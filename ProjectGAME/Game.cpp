#include "Game.h"
#include "Intro.h"
Game::Game(unsigned int width, unsigned int height,std::string title) {
	_GameProperty->_window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
	_GameProperty->_window.setFramerateLimit(60);
	_GameProperty->_stateM.AddState(State(new Intro(_GameProperty)));
	run();
}
void Game::run() {
	while (_GameProperty->_window.isOpen()) {
		_GameProperty->_stateM.GetCurrState()->Handle();
		_GameProperty->_stateM.GetCurrState()->update();
		_GameProperty->_stateM.GetCurrState()->Draw();
	}
}
Game::~Game() {
	std::cout << "Game closed" << std::endl;
}
