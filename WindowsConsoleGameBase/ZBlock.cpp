#include "ZBlock.h"

ZBlock::ZBlock(Point position) :Figure(position)
{
	m_Body = {
		{ Point(0,0), Point(1,0), Point(1,1), Point(2,1) },
		{ Point(2,0), Point(2,1), Point(1,1), Point(1,2) },
		{ Point(0,0), Point(1,0), Point(1,1), Point(2,1) },
		{ Point(2,0), Point(2,1), Point(1,1), Point(1,2) }
	};
}
