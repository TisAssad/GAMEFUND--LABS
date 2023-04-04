#pragma once
#ifndef __STATEMANAGER_H__
#define __STATEMANAGER_H__

#include "States.h"
#include <vector>

class StateManager // Finite State Machine
{ // "Static" class, not a singleton.
public:
	static void Update();
	static void Render();
	// Specific StateManager Methods
	static void Title();
	static void Game();
	static void Pause();
	static void End();
	static void PushState(State* pState);
	static void PopState();
	static void ChangeState(State* pState);
	static void Quit();
	static std::vector<State*>& GetStates();
private:
	StateManager() = default;
	static std::vector<State*> s_states;
	// Not: the "back" of the state vector is the current state.
};

typedef StateManager STMA;

#endif
