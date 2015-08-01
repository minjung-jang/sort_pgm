#ifndef QUICKSORT_CLASS
#define QUICKSORT_CLASS

#include "BaseSort.h"

class QuickSort : public BaseSort {
private :
	int pivot;
	int left;
	int right;

public :
	QuickSort(int* iTarget, int iTargetSize);
	virtual void LetSorting();
	virtual void PrintSorted(int iMatrix);
	void QuickSorting(int iLeft,int iRight);
	void swap(int* x, int* y);
};

#endif