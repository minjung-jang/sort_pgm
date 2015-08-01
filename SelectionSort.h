#ifndef SELECTIONSORT_CLASS
#define SELECTIONSORT_CLASS

#include "BaseSort.h"

class SelectionSort : public BaseSort {
public :
	SelectionSort(int* iTarget, int iTargetSize);
	virtual void LetSorting();
	virtual void PrintSorted(int iMatrix);
};

#endif