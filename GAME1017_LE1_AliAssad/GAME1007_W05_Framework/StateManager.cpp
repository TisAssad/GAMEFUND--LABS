#include "StateManager.h"

void StateManager::Update()
{
	if (!s_states.empty())
		s_states.back()->Update();
}

void StateManager::Render()
{
	if (!s_states.empty())
		s_states.back()->Render();
}

void StateManager::Title()
{

}

void StateManager::Game()
{

}

void StateManager::Pause()
{

}

void StateManager::End()
{

}

void StateManager::PushState(State* pState)
{

}

void StateManager::PopState()
{

}

void StateManager::ChangeState(State* pState)
{

}

void StateManager::Quit()
{

}

std::vector<State*>& StateManager::GetStates()
{
	return s_states;
}

std::vector<State*> StateManager::s_states; // With this the static memory will be allocated