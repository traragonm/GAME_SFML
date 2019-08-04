#pragma once
#include<memory>
#include<string>
class BaseState {
public:
	virtual void initalize() = 0;
	virtual void update() = 0;
	virtual void Draw() = 0;
	virtual void Handle() = 0;
protected:
	std::string name;
};