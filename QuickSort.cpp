#include <iostream>
#include "QuickSort.h"

QuickSort::QuickSort(int* iTarget, int iTargetSize)
{
	setSize(iTargetSize);
	m_iSorted = iTarget;

	pivot = m_iSorted[0];
	left  = 0;
	right = getSize()-1;
}

void QuickSort::LetSorting()
{
	QuickSorting(0, getSize()-1);
}

void QuickSort::QuickSorting(int iLeft, int iRight)
{
	left = iLeft;
	right = iRight;
	pivot = m_iSorted[iLeft];

	while (iLeft < iRight) {
		while ((m_iSorted[iRight] >= pivot) && (iLeft < iRight)) 
			iRight--;

		if (iLeft != iRight) {
			m_iSorted[iLeft] = m_iSorted[iRight];
		}

		while ((m_iSorted[iLeft] <= pivot) && (iLeft < iRight))
			iLeft++;

		if (iLeft != iRight) {
			m_iSorted[iRight] = m_iSorted[iLeft];
			iRight--;
		}
	}

	m_iSorted[iLeft] = pivot;
	pivot = iLeft;
	iLeft = left;
	iRight = right;

	if (left < pivot) {
		QuickSorting(iLeft, pivot-1);
	}

	if (right > pivot) {
		QuickSorting(pivot+1, iRight);
	}
}

void QuickSort::PrintSorted(int iMatrix)
{
	using namespace std;

	cout << "[Quick Sorting]" << endl;
	for (int i = 0; i < getSize(); i++) {
		cout << m_iSorted[i] << ((i+1) % iMatrix == 0? '\n': '\t');
	}
}

void QuickSort::swap(int* x, int* y)
{
	int iTemp;

	iTemp = *x;
	*x = *y;
	*y = iTemp;
}