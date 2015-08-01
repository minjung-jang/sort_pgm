#include <iostream>
#include "SelectionSort.h"

SelectionSort::SelectionSort(int* iTarget, int iTargetSize)
{
	setSize(iTargetSize);
	m_iSorted = iTarget;
}

void SelectionSort::LetSorting()
{
	int iTemp, iMinIndex;

	for (int i = 0; i < getSize()-1; i++) {
		iMinIndex = i;

		for (int j = i; j < getSize(); j++) {
			if (m_iSorted[iMinIndex] > m_iSorted[j]) {
				iMinIndex = j;
			}
		}
		if (iMinIndex != i) {
			iTemp = m_iSorted[iMinIndex];
			m_iSorted[iMinIndex] = m_iSorted[i];
			m_iSorted[i] = iTemp;
		}
	}
}

void SelectionSort::PrintSorted(int iMatrix)
{
	using namespace std;

	cout << "[Selection Sorting]" << endl;
	for (int i = 0; i < getSize(); i++) {
		cout << m_iSorted[i] << ((i+1) % iMatrix == 0? '\n': '\t');
	}
}
