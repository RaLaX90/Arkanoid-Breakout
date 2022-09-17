#include "SafeWall.h"

SafeWall::SafeWall()
{
}

SafeWall::~SafeWall()
{
	SafeRelease(&m_pYellowBrush);
}

void SafeWall::Reset()
{
}

void SafeWall::Initialize(ID2D1HwndRenderTarget* m_pRenderTarget)
{
	m_bitmap = setBackgroundImage(m_pRenderTarget, L"data/61-Breakout-Tiles.png");

	// Creates a green brush for drawing
	m_pRenderTarget->CreateSolidColorBrush(
		D2D1::ColorF(D2D1::ColorF::Yellow),
		&m_pYellowBrush
	);
}

void SafeWall::Draw(ID2D1HwndRenderTarget* m_pRenderTarget)
{
	D2D1_RECT_F rectangle1 = D2D1::RectF(
		0.0F,
		RESOLUTION_Y - 10,
		RESOLUTION_X,
		RESOLUTION_Y
	);
	m_pRenderTarget->DrawBitmap(m_bitmap, rectangle1);
	//m_pRenderTarget->FillRectangle(&rectangle1, m_pYellowBrush);
}

void SafeWall::Move(int mouseX, int mouseY, float elapsedTime)
{
}