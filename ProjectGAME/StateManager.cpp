#include "StateManager.h"
#include<iostream>
StateManager::StateManager() {
	std::cout << "initalize State manager" << std::endl;
}
StateManager::~StateManager() {
	Clear();
	std::cout << "destroy State manager" << std::endl;
	
}
void StateManager::RemoveState() {
	if (!_States.empty()) {
		_TempState = std::move(_States.top());
		_TempState.reset();
		_States.pop();
	}
	std::cout << "Stack is empty " << std::endl;

}
void StateManager::Clear() {
	while (!_States.empty()) {
		_TempState = std::move(_States.top());
		_TempState.reset();
		_States.pop();
	}
	std::cout << "Stack cleared" << std::endl;
}
State &StateManager::GetCurrState() {
	return _States.top();
}
void StateManager::AddState(State newState) {
	_TempState = std::move(newState);
	newState.reset();
	_States.push(std::move(_TempState));

}
