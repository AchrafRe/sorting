#include "stdafx.h"
#include "Sort.h"
#include <iostream>

Sort::Sort()
{
}


Sort::~Sort()
{
}

void Sort::PrintNumbers()
{
	for (int x = 0; x < 6; x++)
	{
		std::cout << bubbles[x] << std::endl;
	}
}


void Sort::BubbleSort()
{
	while (NoError == false)
	{
		if (bubbles[1] < bubbles[0])
		{
			swapper = bubbles[1];
			bubbles[1] = bubbles[0];
			bubbles[0] = swapper;

		}
		if (bubbles[2] < bubbles[1])
		{
			swapper = bubbles[2];
			bubbles[2] = bubbles[1];
			bubbles[1] = swapper;
		}
		if (bubbles[3] < bubbles[2])
		{
			swapper = bubbles[3];
			bubbles[3] = bubbles[2];
			bubbles[2] = swapper;
		}
		if (bubbles[4] < bubbles[3])
		{
			swapper = bubbles[4];
			bubbles[4] = bubbles[3];
			bubbles[3] = swapper;
		}
		if (bubbles[5] < bubbles[4])
		{
			swapper = bubbles[5];
			bubbles[5] = bubbles[4];
			bubbles[4] = swapper;
		}
		if (bubbles[0] <= bubbles[1] && bubbles[1] <= bubbles[2] && bubbles[2] <= bubbles[3] && bubbles[3] <= bubbles[4] && bubbles[4] <= bubbles[5])
		{
			NoError = true;
		}

	}
}
