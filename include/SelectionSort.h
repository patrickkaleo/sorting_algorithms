#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "SortingAlgorithm.h"
class SelectionSort : public SortingAlgorithm
{
	public : void sort(std::vector<int> & array) override;
};

#endif