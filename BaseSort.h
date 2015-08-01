#ifndef BASESORT_CLASS
#define BASESORT_CLASS

class BaseSort {
private :
	int m_size;

protected :
	int* m_iSorted;
	
public :
	int getSize();
	void setSize(int iSize);
	virtual void LetSorting() = 0;
	virtual void PrintSorted(int iMatrix) = 0;
};

#endif