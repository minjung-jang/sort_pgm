#include <iostream>
#include "BubbleSort.h"

BubbleSort::BubbleSort(int* iTarget, int iTargetSize)
{
	setSize(iTargetSize);
	m_iSorted = iTarget;	
}

void BubbleSort::LetSorting()
{
	int iTemp;

	for (int i = 0; i < getSize()-1; i++) {
		for (int j = 0; j < getSize()-1-i; j++) {

			if (m_iSorted[j] > m_iSorted[j+1]) {
				iTemp          = m_iSorted[j];
				m_iSorted[j]   = m_iSorted[j+1];
				m_iSorted[j+1] = iTemp;
			}
		}
	}
}

void BubbleSort::PrintSorted (int iMatrix) 
{
	using namespace std;

	cout << "[Bubble Sorting]" << endl;
	for (int i = 0; i < getSize(); i++) {
		cout << m_iSorted[i] << ((i+1) % iMatrix == 0? '\n': '\t');
	}
}