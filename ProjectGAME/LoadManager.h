#pragma once
#include<map>
#include<iostream>
#include<string>
#include"SFML/Graphics.hpp"
class LoadManager{
public:
	LoadManager();
	~LoadManager();
	void LoadTexture(std::string path);
	sf::Texture &GetTexture(std::string name);
	void LoadFont(std::string path);
	sf::Font &GetFont(std::string name);
private:
	std::map<std::string, sf::Texture> _listTexture;
	std::map<std::string, sf::Font> _listFont;
};

