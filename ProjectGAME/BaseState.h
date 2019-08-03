#pragma once
#include<memory>
class BaseState {
public:
	virtual void initalize() = 0;
	virtual void update() = 0;
	virtual void Draw() = 0;
	virtual void Handle() = 0;
};