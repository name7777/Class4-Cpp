#pragma once

#include <iostream>

using namespace std;

class CLine
{
public:
	CLine(); // default constructor
	~CLine(); // destructor
	
	void SetLength(double len);
	double GetLength();

private:
	double m_dLength; // m_ : member의 약자
	char* m_pStrLineName; // p : pointer의 약자
};