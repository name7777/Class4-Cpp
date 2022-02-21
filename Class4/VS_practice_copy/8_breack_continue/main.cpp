#include <iostream>

using namespace std;

int main()
{
    // continue : 어떠한 값이 조건을 만족하면, 해당 값은 나머지 로직을 무시 (즉, 예외처리 됨)
    for (int i = 0; i < 10; i+=2)
    {
        if (i == 6) continue; // 6은 건너 뛰고 

        cout << i << ' ';
    }

    cout << endl;

    // break : 어떠한 값이 조건을 만족하면, 그 즉시 종료
    for (int i = 0; i < 10; i+=2)
    {
        if (i == 6) break; // continue, break: 예외 상황일 때 사용. break를 넣으면 멈추고 for문을 빠져 나옴

        cout << i << ' ';
    }

    return 0;
}