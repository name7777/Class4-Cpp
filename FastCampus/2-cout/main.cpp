#include <iostream>

using namespace std;

int main()
{
    // 일반적인 cout
    cout << 'a' << endl;

    // 내장함수와 같이 사용할 수 있다
    cout.width(10); // 10개의 공백을 출력
    // cout.fill('#') << endl; // 10개 공백을 #으로 다 fill -> 이건 vscode에서 안됨
    
    cout << "===========================" << endl;

    float num = 0.123456;
    cout << num << endl;
    cout.precision(10); // precision: 정의도
    cout << num <<endl;

    return 0;
}