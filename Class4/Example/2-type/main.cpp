#include <iostream>

using namespace std;

int main()
{
    short signed int i; // signed: 부호 있는 정수를 표현(보통 생략해서 표현)
    short unsigned int j; // unsigned: 부호 없는 정수를 표현. 따라서 값은 0부터 시작

    j = 500000;
    i = j;

    cout << "i(signed) : " << i << ", j(unsigned) : " << j << endl;

    return 0;
}