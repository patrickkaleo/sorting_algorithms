#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

// this is needed: A vector is a recisable array and allows us t owork easily with arrays in oursorting
#include <vector>


class SortingAlgorithm 
{
	public:
	
	/**
	 * @brief Sort an array in place
	 * @brief print the outcome of a given step when the algorithm runs, this will be iun main
	 * @param array array to be sorted (contains ints)
	 */
	virtual void sort(std::vector<int>& array) = 0;
};

#endif