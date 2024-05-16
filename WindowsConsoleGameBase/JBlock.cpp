#include "JBlock.h"

JBlock::JBlock(Point position) :Figure(position)
{
	m_Body = {
		{ Point(2,0), Point(2,1), Point(2,2), Point(1,2) },
		{ Point(1,1), Point(1,2), Point(2,2), Point(3,2) },
		{ Point(2,1), Point(1,1), Point(1,2), Point(1,3) },
		{ Point(0,1), Point(1,1), Point(2,1), Point(2,2) }
	};
}
