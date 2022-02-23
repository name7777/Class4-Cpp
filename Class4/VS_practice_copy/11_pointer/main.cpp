#include <iostream>

using namespace std;

int main()
{
    string food = "Hamburger";
    string* ptrFood = &food; // ★ 여기서 &food는 ref가 아니라 food의 '주소값'을 의미 (헷갈리지 말 것) food의 주소값을 *ptrFood 포인터에 담겠다는 의미

    cout << "food : " << food << endl;
    cout << "Pointer of food : " << *ptrFood << endl; // ★ <역참조> : 실행 시 *를 붙여 ptr을 부르면 '값'
    cout << "Address of food : " << &food << endl;
    cout << "Address of food : " << ptrFood << endl; // ★ 실행 시 *없이 단순 ptr만 부르면 '주소값'
    
    int nNumber = 1234;
    int* ptrNumber = &nNumber;

    cout << "nNumber : " << nNumber << " Address of nNumber : " << &nNumber << endl;
    cout << "ptrNumber : " << *ptrNumber << " Address of ptrNumber : " << ptrNumber << endl;

}