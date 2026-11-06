#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortingAlgorithm.h"
class BubbleSort : public SortingAlgorithm
{
	public : void sort(std::vector<int> & array) override;
};

#endif