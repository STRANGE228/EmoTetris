#pragma once
#include "CreateFigure.h"
#include "IBlock.h"
#include "JBlock.h"
#include "LBlock.h"
#include "OBlock.h"
#include "SBlock.h"
#include "TBlock.h"
#include "ZBlock.h"

Figure* CreateFigure::create(Point position) {
	{
		srand(time(0));
		int ind = (rand() % 7);
		switch (ind)
		{
		case 0:
			return new IBlock(position);
			break;
		case 1:
			return new JBlock(position);
			break;
		case 2:
			return new LBlock(position);
			break;
		case 3:
			return new OBlock(position);
			break;
		case 4:
			return new SBlock(position);
			break;
		case 5:
			return new TBlock(position);
			break;
		case 6:
			return new ZBlock(position);
			break;
		default:
			return new IBlock(position);
			break;
		}
	}
}