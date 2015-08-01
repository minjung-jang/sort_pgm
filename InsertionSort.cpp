#include <iostream>
#include "InsertionSort.h"

InsertionSort::InsertionSort(int* iTarget, int iTargetSize)
{
	setSize(iTargetSize);
	m_iSorted = iTarget;
}

void InsertionSort::LetSorting()
{
	int iTemp;

	for (int i = 1; i < getSize(); i++) {
		iTemp = m_iSorted[i];

		for (int j = i; j > 0; j--) {
			if (iTemp < m_iSorted[j-1]) {
				m_iSorted[j] = m_iSorted[j-1];
				if (j == 1) {
					m_iSorted[j-1] = iTemp;
					break;
				}				
			} else {
				m_iSorted[j] = iTemp;
				break;
			}
		}
	}
}

void InsertionSort::PrintSorted(int iMatrix)
{
	using namespace std;

	cout << "[Insertion Sorting]" << endl;
	for (int i = 0; i < getSize(); i++) {
		cout << m_iSorted[i] << ((i+1) % iMatrix == 0? '\n': '\t');
	}
}