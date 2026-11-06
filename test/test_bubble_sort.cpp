#include "doctest.h"
#include "BubbleSort.h"

TEST_CASE("BUBBLE SORT CORRECTLY SORTS THE ARRAY") 
{
	std::vector<std::vector<int>> array = {{3, 2, 1, 0}, {10, 6, -5, 17}, {20, 1, 15, 15, 9, 7, 1}};
	std::vector<std::vector<int>> sorted = {{0, 1, 2, 3}, {-5, 6, 10, 17}, {1, 1, 7, 9, 15, 15, 20}};
	
	BubbleSort bubble = BubbleSort();
	for(auto iterator = array.begin(); iterator < array.end(); iterator++)
	bubble.sort(*iterator);
	
	CHECK(array[0] == sorted[0]);
	CHECK(array[1] == sorted[1]);
	CHECK(array[2] == sorted[2]);
	
	
}