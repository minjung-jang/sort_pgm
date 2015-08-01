#include <iostream>
#include <time.h>

#include "RandomNumber.h"

RandomNumber::RandomNumber(int iSize, int iScope)
{
	m_size = iSize;
	m_scope = iScope;
	m_iRandom = new int[m_size];
}

RandomNumber::~RandomNumber()
{
	delete[] m_iRandom;
}

int RandomNumber::getSize()
{
	return m_size;
}

int* RandomNumber::getRandomNumbers()
{
	return m_iRandom;
}

/* 
 *  bDup : 숫자 중복허용여부
 */
void RandomNumber::MakeRandomNumbers(bool bDup)
{
	srand((unsigned)time(NULL));

	if (bDup == true) {
		for (int i = 0; i < m_size; i++) {
			m_iRandom[i] = rand() % m_scope + 1;
		}
	} else {
		int i = 0;

		while (i < m_size) {
			m_iRandom[i] = rand() % m_scope + 1;
			
			if (CheckDuplication(m_iRandom[i], i)) {
				continue;   // 중복된 숫자면 숫자 다시 세팅
			}

			i++;
		}
	}
}

bool RandomNumber::CheckDuplication(int iValue, int iCheckScope)
{
	for (int i = 0; i < iCheckScope; i++) {
		if (m_iRandom[i] == iValue) {
			return true;
		}
	}

	return false;
}

void RandomNumber::PrintRandomNumbers(int iMatrix)
{
	using namespace std;

	for (int i = 0; i < m_size; i++) {
		cout << m_iRandom[i] << ((i+1) % iMatrix == 0? '\n': '\t');
	}
}