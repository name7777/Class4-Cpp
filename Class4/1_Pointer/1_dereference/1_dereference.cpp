#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food; // ★역참조 : 어떠한 변수의 주소값(&)을 포인터(*)에 저장하여 해당 변수의 value+주소값을 모두 가지게 됨 (초기화)

    cout << food << endl;
    cout << &food << endl; // food의 &(주소값) 이니 food 변수가 저장된 메모리의 주소값 출력
    cout << ptr << endl; // 그냥 ptr출력은 food의 주소값을 반환
    cout << *ptr << endl; // *ptr출력은 food의 value를 반환 (★위에 선언/초기화에 썼던 *와 모양은 동일하지만 전혀 다른 의미)

    *ptr = "Hamburger";

    cout << *ptr << endl;
    cout << food << endl;

    return 0;
}