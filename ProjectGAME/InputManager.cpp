#include "InputManager.h"
#include<iostream>
InputManager::InputManager() {
	std::cout << "Initalize Input Manager" << std::endl;
}
InputManager::~InputManager() {
	std::cout << "Delete Input Manager" << std::endl;
}
bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow& window) {
	if (sf::Mouse::isButtonPressed(button)) {
		sf::IntRect temp(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);
		if (temp.contains(GetMousePosition(window))) {
			return true;
		}
		return false;
	}
	return false;
}
sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow& window) {
	return sf::Mouse::getPosition(window);

}
bool InputManager::IsSpriteHovered(sf::Sprite object, sf::Mouse, sf::RenderWindow& window) {
	if (sf::Event::MouseEntered) {
		return true;
	}
	return false;
}
