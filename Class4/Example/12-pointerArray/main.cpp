#include <iostream>

using namespace std;

int main()
{
    int arrNumber[5];
    int* ptr;
    // - pointer array의 역참조를 표현하는 5가지 방법
    ptr = arrNumber; *ptr = 10; // ★ '역참조'하여 arrNumber[0]에 10을 넣음 (즉, 처음 단순히 array를 가리키는 ptr을 호출 시엔 [0]을 가리킨다)
    ptr++; *ptr = 20; // ptr을 ++ 해줘어서 arrNumber[0]에서 [1]번 index로 옮겨감. 즉, 4byte 공간을 더해 줌
    ptr = &arrNumber[2]; *ptr = 30; // arrNumber[2]의 주소값을 ptr에 다시 대입. 역참조에 의해 값 30을 지정
    ptr = arrNumber + 3; *ptr = 40; // arrNumber[0]과 3을 더하기 = 4번째 방[3]에 40을 넣는 것과 동일
    ptr = arrNumber; *(ptr + 4) = 50; // ptr + 4 = 5번째 방[4]에 50을 넣음

    for (int i = 0; i < 5; i++)
        cout << "[" << i << "] = " << arrNumber[i] << endl;

    return 0;
}