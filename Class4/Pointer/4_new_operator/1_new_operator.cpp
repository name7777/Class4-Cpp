#include <iostream>

using namespace std;

int main()
{
    char* pvalue = NULL; // ★'주소를 저장할 포인터' = new '할당하고 싶은 크기의 자료형'; -> 포인터 초기화 및 초기값 NULL
    pvalue = new char[20]; // 20자의 문자열에 대한 메모리 할당 요청

    *pvalue = 'a';

    cout << "*pvalue : " << *pvalue << endl;
    cout << "pvalue : " << *pvalue << endl;

    delete[] pvalue; // 메모리 반환

    return 0;
}