#pragma once
#include"BaseState.h"
#include<stack>

typedef std::unique_ptr<BaseState> State;
class StateManager{
public:
	StateManager();
	~StateManager();
	void AddState(State newState);
	void RemoveState();
	State &GetCurrState();
private:
	std::stack<State> _States;
	State _TempState;
	void Clear();
};

