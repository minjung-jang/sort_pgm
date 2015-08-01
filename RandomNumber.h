/*-----------------------------------------------
	Random 숫자 얻는 Class 선언
 ------------------------------------------------*/

#ifndef GET_RANDOM_NUMBER
#define GET_RANDOM_NUMBER

class RandomNumber {
private :
	int* m_iRandom;
	int m_size;
	int m_scope;

public :
	RandomNumber(int iSize, int iScope);
	~RandomNumber();
	int  getSize();
	int* getRandomNumbers();
	void MakeRandomNumbers(bool bDup);
	bool CheckDuplication(int iValue, int iCheckScope);
	void PrintRandomNumbers(int iMatrix);
};

#endif