#pragma once
#include "PaintDevice.h"
#include <vector>
#include "Figure.h"
class GameField
{
private:
	size_t m_Width;
	size_t m_Height;
	std::vector<std::vector<wchar_t>> m_Field;
public:
	void resize(size_t width, size_t height);
	void render(PaintDevice& paintDevice);
	bool has_collision(const Figure& figure);
	size_t merge(const Figure& figure);
};

