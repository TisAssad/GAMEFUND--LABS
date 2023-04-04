#include "ObstacleRow.h"
#include "RenderManager.h"
#include "TextureManager.h"

ObstacleRow::ObstacleRow():m_gapCtr(0), m_gapMax(3)
{
	for (int i = 0; i < 9; i++)
	{
		m_obstacles.push_back(new Obstacle({ 128.0f * i,384.0f, 128.0f,128.0f }));
	}
	m_obstacles.shrink_to_fit();
}

void ObstacleRow::Update()
{
	if (m_obstacles[0]->GetPos().x <= -128.0f)
	{
		delete m_obstacles[0];
		m_obstacles[0] = nullptr;
		m_obstacles.erase(m_obstacles.begin());
		// add new obstacles at the end
		if (m_gapCtr++ % m_gapMax == 0)
		{
			m_obstacles.push_back(new Obstacle({ 1024.0f, 384.0f, 128.0f, 128.0f }, true));
		}
		else
		{
			m_obstacles.push_back(new Obstacle({ 1024.0f, 384.0f, 128.0f, 128.0f }));
		}
		m_obstacles.shrink_to_fit();
	}
	
	for (const auto obstacle : m_obstacles)
		obstacle->Update();
}

void ObstacleRow::Render()
{
	// Blue line under obstacles.
	SDL_SetRenderDrawColor(REMA::GetRenderer(), 0, 0, 255, 255);
	SDL_RenderDrawLine(REMA::GetRenderer(), 0, 512, 1024, 512);
	
	for (const auto obstacle : m_obstacles)
		obstacle->Render();
}
