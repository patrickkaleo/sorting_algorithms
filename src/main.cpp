#include <iostream>

#include "BubbleSort.h"

int main() 
{
	BubbleSort bubble = BubbleSort();
	std::vector<int> arr1 = {3, 2, 1, 0};
	bubble.sort(arr1);
	bubble.print(arr1);
	
	return 0;
}