#pragma once
#include "Engine.h"
#include "GameField.h"
#include "Figure.h"
#include "IBlock.h"
class Tetris : public Engine 
{
private:
	GameField m_GameField;
	const size_t m_Width = 14;
	const size_t m_Height = 26;
	Figure* m_Figure;
	Figure* m_NextFigure;
	size_t m_Score = 0u;
	bool m_End = false;
	void drawScore(PaintDevice& paintDevice);
public:
	Tetris();
	bool end() const override;
	void on_button_press(const int button) override;
	void update(const int dt) override;
	virtual void render(PaintDevice& paintDevice) override;
	void retry();
};

