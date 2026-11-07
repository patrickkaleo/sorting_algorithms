#include "SelectionSort.h"

/**
 * @file SelectionSort.cpp Implementation of the selection algorithm
 *
 *
 * @brief Sort an array by selecting the min element and placing it in the right index
 *
 * Time complexity
 * Average -> O(N^2)
 * Worst case -> O(N^2)
 * Best case -> O(N^2)
 *
 * Bad
 *
 * @details
 * n elements
 * 2 pointers i and j
 * i points to an unsorted index and we are using j to look for the element that has to go at that index
 * linearly loop through the array i.e i++ and j++
 * init i = 0 : condition i < n - 1
 * init j = i : j < n
 *
 * min = index of min value found
 *
 *
 *
 */

void SelectionSort::sort(std::vector<int> &array)
{
	int n = array.size();

	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i; j < n; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (min != i)
			swap(array[min], array[i]);
	}
}