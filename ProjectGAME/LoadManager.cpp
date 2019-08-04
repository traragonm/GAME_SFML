#include "LoadManager.h"
LoadManager::LoadManager() {
	std::cout << "Initalize Load manager" << std::endl;
}
LoadManager::~LoadManager() {
	std::cout << "Delete load manager" << std::endl;
}
void LoadManager::LoadTexture(std::string path) {
	sf::Texture _Texture;
	if (_Texture.loadFromFile(path)) {
		this->_listTexture[path] = _Texture;
	}
	else {
		std::cout << "Texture loading error" << std::endl;
	}
}
sf::Texture& LoadManager::GetTexture(std::string name) {
	return this->_listTexture.at(name);
}
void LoadManager::LoadFont(std::string path) {
	sf::Font _Font;
	if (_Font.loadFromFile(path)) {
		this->_listFont[path] = _Font;
	}
	else {
		std::cout << "Font loading error" << std::endl;
	}
}
sf::Font& LoadManager::GetFont(std::string name) {
	return this->_listFont.at(name);
}