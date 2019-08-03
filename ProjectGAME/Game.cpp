#include "Game.h"
Game::Game(unsigned int width, unsigned int height,std::string title) {
	_GameProperty->_window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
	_GameProperty->_window.setFramerateLimit(60);
	run();
}
void Game::run() {
	while (_GameProperty->_window.isOpen()) {
		sf::Event event;
		while (_GameProperty->_window.pollEvent(event))
		{
			if (event.type == sf::Event::EventType::Closed)
			{
				_GameProperty->_window.close();
			}
		}
		_GameProperty->_window.clear();
		_GameProperty->_window.display();
	}
}
Game::~Game() {

}
