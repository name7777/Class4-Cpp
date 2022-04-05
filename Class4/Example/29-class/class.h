#pragma once
#include <iostream>
#include <string>

using namespace std;

class CCar // class(클래스)
{
public:
	string m_strCompany; // attribute(속성) 이라고 칭한다
	string m_strCarName;
	string m_strCarNo;

	void PrintCarInformation(); // method(함수) 라고 칭한다
	int CarSpeed(int maxSpeed); // 이처럼 class도 파라미터를 받을 수 있다
};

