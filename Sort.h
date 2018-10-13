#pragma once
class Sort
{
public:
	void PrintNumbers();
	void BubbleSort();
	
	Sort();
	~Sort();
private:
	int bubbles[6]{ 3,1,9,2,6,4 };
	int swapper;
	bool NoError = false;
};
