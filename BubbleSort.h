#ifndef BUBBLESORT_CLASS
#define BUBBLESORT_CLASS

#include "BaseSort.h"

class BubbleSort : public BaseSort {
public :
	BubbleSort(int* iTarget, int iTargetSize);
	virtual void LetSorting();
	virtual void PrintSorted(int iMatrix);		
};

#endif