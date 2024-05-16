#include "OBlock.h"

OBlock::OBlock(Point position) :Figure(position)
{
	m_Body = {
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) },
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) },
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) },
		{ Point(0,0), Point(0,1), Point(1,1), Point(1,0) }
	};
}
