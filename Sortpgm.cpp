#include <iostream>

#include "RandomNumber.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

using namespace std;

void main()
{
	RandomNumber rNumber(100,500);
	rNumber.MakeRandomNumbers(false);

	cout << "Before Sorting -------------------- " << endl;
	cout << endl;
	rNumber.PrintRandomNumbers(10);

	cout << endl << "After sorting --------------------- " << endl;
	cout << endl;
	BubbleSort bSort(rNumber.getRandomNumbers(), rNumber.getSize());
	bSort.LetSorting();
	bSort.PrintSorted(10);

	SelectionSort sSort(rNumber.getRandomNumbers(), rNumber.getSize());
	sSort.LetSorting();
	sSort.PrintSorted(10);

	InsertionSort iSort(rNumber.getRandomNumbers(), rNumber.getSize());
	iSort.LetSorting();
	iSort.PrintSorted(10);

	QuickSort qSort(rNumber.getRandomNumbers(), rNumber.getSize());
	qSort.LetSorting();
	qSort.PrintSorted(10);
}