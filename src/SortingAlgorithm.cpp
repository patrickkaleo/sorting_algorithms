#include "SortingAlgorithm.h"

void SortingAlgorithm::swap(int& a, int& b ) 
{
	int temp = a;
	a = b;
	b = temp;
}

void SortingAlgorithm::print(std::vector<int>& array) 
{
	int length = array.size();
	std::cout << "[ " ; 
	for(int i = 0; i < length; i++) 
	{
		int num = array[i];
		if(i < length - 1)
		std::cout << num << "\t";
		else std::cout << num;
	}
	std::cout << " ]\n"; 
	
}