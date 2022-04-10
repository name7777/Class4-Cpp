#include "header.h"

CLine::CLine()
{
	cout << "CLine Object is being created" << endl;
	m_pStrLineName = new char[16];
}

CLine::~CLine()
{
	cout << "CLine Object is being deleted" << endl;
	if (m_pStrLineName != NULL)
	{
		delete m_pStrLineName; // 내가 사용한 메모리는 삭제
	}
}

void CLine::SetLength(double len)
{
	m_dLength = len;
}

double CLine::GetLength()
{
	return m_dLength;
}