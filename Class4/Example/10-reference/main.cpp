#include <iostream>

using namespace std;

void abc(int& x) // ★ 인자를 ref를 넣음으로서 참조에 의해 값이 바뀐다. 참조 없이 단순 인자만 넣으면 바뀌지 않음 (call by value vs call by reference)
{
    x = 100;
    cout << x << endl;
}

int main()
{
    string food = "Pizza";
    string& meal = food; // ★ 선언 시 &는 '참조'를 의미하고 선언한 ref를 밑에서 실행할 때 &는 주소값을 의미. 실행 시 &없으면 food와 동일하게 value를 반환
    cout << food << "  , value is equal = " << meal << endl; // 둘다 똑같은 값이다
    cout << &food << " , memory address is equal = " << & meal << endl;

    meal = "Hamburger";
    cout << food << " , value is equal =  " << meal << endl; // 둘다 똑같은 값이다
    cout << &food << " , memory address is equal = " << &meal << endl;

    int xx = 200;
    abc(xx);
    cout << "xx : " << xx << endl; // xx가 100으로 변한모습. 왜? 메모리를 참조했기 때문에 그 해당 값으로 바뀜

    return 0;
}