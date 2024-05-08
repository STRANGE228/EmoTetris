#pragma once
#include <vector>
#include "PaintDevice.h"

struct Point
{
	int x;
	int y;
	Point(int _x = 0, int _y = 0) {
		x = _x;
		y = _y;
	}
};

class Figure
{
protected:
	Point m_Position;
	double m_TimeFromLastUpdatec = 0;
	double m_TimeForUpdate = 500;
	std::vector<std::vector<Point>> m_Body;
	Point m_PositionBackup;
	size_t m_CurrentRotate = 0;
	size_t m_CurrentRotateBackup = 0;
public:
	Figure(Point position);
	void update(double dt);
	void render(PaintDevice& paintDevice);
	void move_right();
	void move_left();
	const std::vector<Point>& get_body() const;
	Point get_position() const;
	void set_position(Point position);
	void backup();
	void restore();
	void boost();
	void rotate();
};

