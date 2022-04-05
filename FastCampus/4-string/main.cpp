#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "abc"; // ★배열과 동일함(사이즈는 지정 안했음)
    cout << str << endl;
    cout << str[0] << endl; // 배열이기에 index를 넣어주면 해당 값을 출력해줌
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl; // 결과 : 0 ★null 문자형이라고 해서 문자가 끝나면 제일 끝 index에 null을 하나 반드시 추가해서 출력됨
    cout << sizeof(str) << endl; // 결과 '4', why? 

    cout << "============" << endl;

    cout << (int)str[0] << endl; // 결과 : 97 (ASCII 코드로 인한 형변환) 
    cout << (int)str[1] << endl; // 결과 : 98
    cout << (int)str[2] << endl; // 결과 : 99
    cout << (int)str[3] << endl; // 결과 : 0
    cout << strlen(str) << endl; // 결과 '3'

    return 0;
}