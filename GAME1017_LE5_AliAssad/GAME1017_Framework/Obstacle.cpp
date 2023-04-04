#include "Obstacle.h"
#include "RenderManager.h"
#include "TextureManager.h"

Obstacle::Obstacle(const SDL_FRect dst, bool sprite, const SDL_Rect src, const char* key)
	:m_hasSprite(sprite), m_pSprite(nullptr)
{
	m_pos = { dst.x, dst.y };

	if (m_hasSprite)
	{
		// Load Obstacle SPrites
		TEMA::Load("../Assets/img/spike.png", "spike");
		TEMA::Load("../Assets/img/saw.png", "saw");
		TEMA::Load("../Assets/img/fire.png", "fire");

	}
}

Obstacle::~Obstacle()
{
	if (m_hasSprite) // Deallocate image once created.
	{
		delete m_pSprite;
		m_pSprite = nullptr; 
	}
}

void Obstacle::Update()
{
	m_pos.x -= kScrollSpeed;
}

void Obstacle::Render()
{
	SDL_FRect m_dst = { m_pos.x, m_pos.y, 128.0f, 128.0f }; 
	if (m_hasSprite)
	{
		SDL_RenderCopyF(REMA::GetRenderer(), TEMA::GetTexture("spike"), NULL, &m_dst);
		if (m_hasSprite = "spike")
		{
			m_hasSprite = "saw";
			SDL_RenderCopyF(REMA::GetRenderer(), TEMA::GetTexture("saw"), NULL, &m_dst);
			SDL_RenderCopyF(REMA::GetRenderer(), TEMA::GetTexture("fire"), NULL, &m_dst);
			
		}
	}
	// Render outline just for Week 9 Lab.
	SDL_SetRenderDrawColor(REMA::GetRenderer(), 0, 128, 128, 255);
	SDL_RenderDrawRectF(REMA::GetRenderer(), &m_dst);
}
