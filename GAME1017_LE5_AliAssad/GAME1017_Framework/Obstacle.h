#ifndef __OBSTACLE_H__
#define __OBSTACLE_H__
#include "Primitives.h"

constexpr int kScrollSpeed = 4;

class Obstacle // Not a GameObject.
{
public:
	Obstacle(const SDL_FRect dst, bool sprite = false, const SDL_Rect src = { 0,0,0,0 }, const char* key = "");
	~Obstacle();
	void Update();
	void Render();
	const SDL_FPoint GetPos() { return m_pos; }
private:
	int typeObs;
	bool m_hasSprite;
	Image* m_pSprite; 
	SDL_FPoint m_pos; 
};

#endif