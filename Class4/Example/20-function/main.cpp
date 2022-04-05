#include <iostream>

using namespace std;

// ===========================함수 선언===========================
void HelloFunc()
{
    cout << "Welcome to C++ Hell!!!" << endl;
}

void HelloWorld(string strName)
{
    cout << "Hello " << strName << endl;
}

// 함수의 초기값
void WhereAreYouFrom(string strName, int nAge, string strCountry = "KOREA") // default가 KOREA
{
    cout << "My name is " << strName << "and My Age is " << nAge << "!!!\n";
    cout << "I came from " << strCountry << "!!!\n";
}

// 함수의 return value
int HowOldAreYou(int nAge)
{
    int age = nAge;
    return age;
}

// 함수의 참조연산을 통한 2개 이상 return
void SwapInt(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp; // 위 세 과정을 통해 x와 y가 바뀜 (call by reference)
}




// ===========================함수 구현===========================
int main()
{
    HelloFunc();
    HelloWorld("wh_kwon");

    WhereAreYouFrom("whkwon", 20); // 세번째 arg가 비어있으므로 default인 KOREA를 반환
    WhereAreYouFrom("James", 25, "USA");

    cout << "My age : " << HowOldAreYou(25) << endl;

    cout << "===========================Swap func===========================\n";
    int nFirst = 10, nSecond = 30;
    cout << "Before Swap nFirst[" << nFirst << "], nSecond[" << nSecond << "]\n";
    SwapInt(nFirst, nSecond);
    cout << "After Swap nFirst[" << nFirst << "], nSecond[" << nSecond << "]\n";


    return 0;
}