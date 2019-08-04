#include "StateManager.h"
#include<iostream>
StateManager::StateManager() {
	std::cout << "initalize State manager" << std::endl;
}
StateManager::~StateManager() {
	std::cout << "destroy State manager" << std::endl;
}
void StateManager::RemoveState() {
	if (!_States.empty()) {
		
	}
	std::cout << "Stack is empty " << std::endl;

}
State &StateManager::GetCurrState() {
	return _States.top();
}
void StateManager::AddState(State newState) {
	_TempState = std::move(newState);
	_States.push(_TempState);
}
