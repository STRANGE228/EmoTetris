#include "TBlock.h"

TBlock::TBlock(Point position) :Figure(position)
{
	m_Body = {
		{ Point(1,0), Point(0,1), Point(1,1), Point(2,1) },
		{ Point(2,1), Point(1,0), Point(1,1), Point(1,2) },
		{ Point(1,2), Point(0,1), Point(1,1), Point(2,1) },
		{ Point(0,1), Point(1,0), Point(1,1), Point(1,2) }
	};
}
