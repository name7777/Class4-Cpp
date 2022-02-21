#include <iostream>

using namespace std;

int main()
{
    // 1) cin
    int x;
    cout << "Input a number : ";
    cin >> x;
    cout << "Your Input number : " << x << endl;

    // 2) 연산
    int a, b;
    int nSum;
    cout << "Input a number : ";
    cin >> a; cout << endl;
    cout << "Input b number : ";
    cin >> b; cout << endl;
    nSum = a + b;
    cout << "nSum : " << nSum << endl;

    // 3) 문자 입력
    char strName[50];
    int age = 0;
    cout << "Enter your name and age : ";
    cin >> strName >> age; cout << endl; // cin에 >> 붙여 한번에 2개 이상 입력 가능
    cout << "Your name is " << strName << " and age is " << age << endl;

    // 4) cerr
    char strErr[] = "Welcome cerr!";
    cerr << "Error message : " << strErr << endl; // cout과 다르게 cerr는 에러이기에 바로 출력 해줌

    // 5) clog
    char strLog[] = "Hello clog!";
    clog << "Log message : " << strLog << endl;

    return 0;
}