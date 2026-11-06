#include "BubbleSort.h"

/**
 * @file BubbleSort.cpp Implementation of the bubble sort algorithm
 * Time complexity := O(N^2)
 *
 *
 *
 * KEY things to note:
 * n = size of array (i.e number of elements to sort)
 * arrays are zero indexed in c++ so last index is n - 1
 * use 2 loops, nested with ptrs i && j
 * init i = 0 : condition i < n - 1 || i <= n - 2
 * init j -> 0 : condition j < n - i - 1 || j <= n - i - 2
 *
 * note the difference between <= and >=
 *
 * example: sort  [3, 2, 1, 0]
 *
 * data: n = 4
 * init i = 0 : i < n - 1
 * init j = 0 : j < n - i - 1
 *
 *
 * while i = 0; j < 4 - 0 - 1 < 3
 * j = 0 -> [2, 3, 1, 0]
 * j = 1 -> [2, 1, 3, 0]
 * j = 2 -> [2, 1, 0, 3] note how 3 has been "bubbled to the end"
 *
 * i = 1 and j < 4 - 1 - 1 < 2
 * j = 0 -> [1, 2, 0, 3]
 * j = 1 -> [1, 0, 2, 3]
 *
 * i = 2 and j < 4 - 2 - 1 < 1
 * j = 0: -> [0, 1, 2, 3]
 *
 */
void BubbleSort::sort(std::vector<int> &array)
{
	int n = array.size();

	for (int i = 0; i < n - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1]) 
			{
				this->swap(array[j], array[j + 1]);
				swapped = true;
			}
		}
		
		if(!swapped) return; // if a whole iteration of j finishes without swaping any values then the array is sorted successfully so we can exit without doing unnecessary further comparison
	}
}