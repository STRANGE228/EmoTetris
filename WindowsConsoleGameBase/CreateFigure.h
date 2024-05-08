#pragma once

const static std::vector<std::vector<std::vector<Point>>> m_Bodies = {
	{
		{ Point(1,0), Point(1,1), Point(1,2), Point(1,3) },
		{ Point(0,2), Point(1,2), Point(2,2), Point(3,2) },
		{ Point(2,0), Point(2,1), Point(2,2), Point(2,3) },
		{ Point(0,1), Point(1,1), Point(2,1), Point(3,1) }
	}, {
		{ Point(2,0), Point(2,1), Point(2,2), Point(1,2) },
		{ Point(1,1), Point(1,2), Point(2,2), Point(3,2) },
		{ Point(2,1), Point(1,1), Point(1,2), Point(1,3) },
		{ Point(0,1), Point(1,1), Point(2,1), Point(2,2) }
	}, {
		{ Point(1,0), Point(1,1), Point(1,2), Point(2,2) },
		{ Point(1,2), Point(1,1), Point(2,1), Point(3,1) },
		{ Point(1,1), Point(2,1), Point(2,2), Point(2,3) },
		{ Point(0,2), Point(1,2), Point(2,2), Point(2,1) }
	}, {
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) },
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) },
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) },
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) }
	}, {
		{ Point(0,0), Point(1,0), Point(1,1), Point(2,1) },
		{ Point(2,0), Point(2,1), Point(1,1), Point(1,2) },
		{ Point(0,0), Point(1,0), Point(1,1), Point(2,1) },
		{ Point(2,0), Point(2,1), Point(1,1), Point(1,2) }
	}, {
		{ Point(1,0), Point(0,1), Point(1,1), Point(2,1) },
		{ Point(2,1), Point(1,0), Point(1,1), Point(1,2) },
		{ Point(1,2), Point(0,1), Point(1,1), Point(2,1) },
		{ Point(0,1), Point(1,0), Point(1,1), Point(1,2) }
	}, {
		{ Point(0,1), Point(1,1), Point(1,0), Point(2,0) },
		{ Point(1,0), Point(1,1), Point(2,1), Point(2,2) },
		{ Point(0,1), Point(1,1), Point(1,0), Point(2,0) },
		{ Point(1,0), Point(1,1), Point(2,1), Point(2,2) }
	}
};
class CreateFigure
{
public:
	std::vector<std::vector<Point>> static create() {
		srand(time(0));
		int ind = (rand() % 7);
		return m_Bodies[ind];
	}
};

