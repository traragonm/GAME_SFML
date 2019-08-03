#include "LoadManager.h"
void LoadManager::LoadTexture(std::string path) {
	sf::Texture _Texture;
	if (_Texture.loadFromFile(path)) {
		this->_listTexture[path] = _Texture;
	}
	else {

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

	}
}
sf::Font& LoadManager::GetFont(std::string name) {
	return this->_listFont.at(name);
}