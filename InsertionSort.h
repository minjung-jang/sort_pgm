#ifndef INSERTIONSORT_CLASS
#define INSERTIONSORT_CLASS

#include "BaseSort.h"

class InsertionSort : public BaseSort {
public :
	InsertionSort(int* iTarget, int iTargetSize);
	virtual void LetSorting();
	virtual void PrintSorted(int iMatrix);
};

#endif