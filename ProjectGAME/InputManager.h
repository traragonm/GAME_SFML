#pragma once
#include"SFML/Graphics.hpp"
class InputManager{
public:
	bool IsSpriteClicked(sf::Sprite object,sf::Mouse::Button,sf::RenderWindow& window);
	sf::Vector2i GetMousePosition(sf::RenderWindow& window);
	bool IsSpriteHovered(sf::Sprite object, sf::Mouse, sf::RenderWindow& window);
private:

};

