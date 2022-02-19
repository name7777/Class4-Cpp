#include <iostream>

using namespace std;

int main()
{
    // 예제1
    int a;
    cout << "put number : ";
    cin >> a;
    cout << a << endl;;

    // 예제2 - if문 조건 안에서도 cin 사용 가능
    cout << "put number2 : ";
    if (cin >> a)
        cout << a;

    return 0;
}