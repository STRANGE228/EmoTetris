#include "IBlock.h"

IBlock::IBlock(Point position) :Figure(position)
{
	m_Body = CreateFigure::create();
}

