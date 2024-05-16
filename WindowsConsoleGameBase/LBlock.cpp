#include "LBlock.h"

LBlock::LBlock(Point position) :Figure(position)
{
	m_Body = {
		{ Point(1,0), Point(1,1), Point(1,2), Point(2,2) },
		{ Point(1,2), Point(1,1), Point(2,1), Point(3,1) },
		{ Point(1,1), Point(2,1), Point(2,2), Point(2,3) },
		{ Point(0,2), Point(1,2), Point(2,2), Point(2,1) }
	};
}
