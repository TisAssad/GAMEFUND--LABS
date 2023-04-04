#pragma once
#ifndef __STATES_H__
#define __STATES_H__


class State // Abstract Base Class
{
public:
	virtual void Enter() = 0;
	virtual void Update() = 0;
	void Render();
	virtual void Exit() = 0;
	void Resume() {};
protected: // Private but inherited
	State() = default;
};
#endif