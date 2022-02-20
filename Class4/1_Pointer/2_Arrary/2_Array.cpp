#include <iostream>

using namespace std;

int main ()
{
    int numbers[5];
    int* p;

    // ★5가지 표현방법
    p = numbers; *p = 10; // 1) p는 numbers 배열의 주소를 갖는다고 선언하며 [0]방에 *p = 10을 집어 넣음
    p++; *p = 20; // 2) p의 주소값을 하나 옮겨서(= [1]) 그 index에 20을 넣음 
    p = &numbers[2]; *p = 30; // 3) index [2]에 역참조 p를 선언하고 그 곳에 30을 넣음
    p = numbers + 3; *p = 40; // 4) numbers + 3은 index [3]을 의미하며 그곳에 40을 넣음
    p = numbers; *(p + 4) = 50; // 5) 원래 역참조 p의 주소값(= numbers[0])에서 +4를 하면 index [4]를 가리키고 그 곳에 50을 넣음

    /* ★차이점
     * 포인터에는 새 주소를 할당할 수 있음
     * 배열은 새 주소를 할당할 수 없음
    */

    for (int n=0; n < 5; n++)
        cout << numbers[n] << ", ";

    return 0;
}