#include "Tetris.h"
#include <iostream>
#include <string>

Tetris::Tetris() {
	paint_device().resize(Size(m_Width + 6, m_Height));
	m_GameField.resize(m_Width, m_Height);
	m_Figure = CreateFigure::create(Point(5, 1));
	m_NextFigure = CreateFigure::create(Point(15, 1));
	track_key(VK_LEFT);
	track_key(VK_RIGHT);
	track_key(VK_DOWN);
	track_key(VK_SPACE);
	track_key(0x52);
	track_key(0x45);
	track_key(0x50);
}


bool Tetris::end() const
{
	if (m_End) {
		//system("cls");
		std::cout << "     Game is end\nPRESS \"R\" TO RESTART\n  PRESS \"E\" TO EXIT";
		return false;
	}
	return m_End;
}

void Tetris::on_button_press(const int button)
{
	m_Figure->backup();
	switch (button)
	{
	case VK_LEFT:
		m_Figure->move_left();
		break;
	case VK_RIGHT:
		m_Figure->move_right();
		break;
	case VK_DOWN:
		m_Figure->boost();
		break;
	case VK_SPACE:
		m_Figure->rotate();
		break;
	case 0x52:
		retry();
		break;
	case 0x50:
		m_Score += 1236;
		break;
	case 0x45:
		exit(0);
		break;
	default:
		break;
	}
	if (m_GameField.has_collision(*m_Figure))
		m_Figure->restore();
}

void Tetris::update(const int dt)
{
	if (!m_End) {
		if (m_GameField.has_collision(*m_Figure))
			m_End = true;
		m_Figure->backup();
		m_Figure->update(dt);
		if (m_GameField.has_collision(*m_Figure))
		{
			m_Figure->restore();
			m_Score += m_GameField.merge(*m_Figure);
			if (m_Score > 99999)
				m_Score = 99999;
			m_Figure = m_NextFigure;
			m_Figure->set_position(Point(5, 1));
			//m_NextFigure = new IBlock(Point(15, 1));
			m_NextFigure = CreateFigure::create(Point(15, 1));
		}
	}
}

void Tetris::render(PaintDevice& paintDevice)
{
	if (!m_End) {
		m_GameField.render(paintDevice);
		m_Figure->render(paintDevice);
		m_NextFigure->render(paintDevice);
		drawScore(paintDevice);
	}
}

void Tetris::drawScore(PaintDevice& paintDevice) {
	std::string score = std::to_string(m_Score);
	
	paintDevice.set_char(Vector2(14, 6), 'S', 0);
	paintDevice.set_char(Vector2(15, 6), 'C', 0);
	paintDevice.set_char(Vector2(16, 6), 'O', 0);
	paintDevice.set_char(Vector2(17, 6), 'R', 0);
	paintDevice.set_char(Vector2(18, 6), 'E', 0);
	paintDevice.set_char(Vector2(19, 6), ':', 0);
	for (int i = 0; i < score.size(); i++) {
		paintDevice.set_char(Vector2(14 + i, 7), score[i], 0);
	}
}

void Tetris::retry()
{
	paint_device().resize(Size(m_Width + 6, m_Height));
	m_GameField.resize(m_Width, m_Height);
	m_Figure = new IBlock(Point(5, 1));
	m_NextFigure = new IBlock(Point(15, 1));
	m_End = false;
	m_Score = 0;
}
