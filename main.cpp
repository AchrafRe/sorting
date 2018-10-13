// bubblesort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Sort.h"



Sort Obj;
 
int main()
{
	Obj.PrintNumbers();

	Obj.BubbleSort();

	std::cout << std::endl;

	Obj.PrintNumbers();

    return 0;
}


