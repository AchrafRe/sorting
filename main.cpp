// bubblesort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>


int bubbles[6]{ 3,1,9,2,6,4 };
int swapper;
bool NoError = false;
 
int main()
{

	for (int x = 0; x < 6; x++)
	{
		std::cout << bubbles[x] << std::endl;
	}


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

	std::cout << std::endl << std::endl;

	for (int z = 0; z < 6; z++)
	{
		std::cout << bubbles[z] << std::endl;
	}

    return 0;
}

