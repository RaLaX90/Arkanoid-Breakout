#pragma once

#include "Sprite.h"

class SafeWall : public Sprite
{
private:

	ID2D1SolidColorBrush* m_pYellowBrush = nullptr;

public:
	SafeWall();
	~SafeWall();

	void Reset() override;
	void Initialize(ID2D1HwndRenderTarget* m_pRenderTarget) override;
	void Draw(ID2D1HwndRenderTarget* m_pRenderTarget) override;

	void Move(int mouseX, int mouseY, float elapsedTime);
};