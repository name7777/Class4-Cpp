#include <iostream>

using namespace std;

/* ★부동소수점(float, double, long double)
- float : 32byte
- doulbe: 64byte
- long double : 64 ~ 128byte (컴파일 또는 플랫폼마다 사이즈가 다름)

*/
int main()
{
    float num0 = 1.5;
    float num1 = num0 * 1.5;
    float num2 = num0 / 2;
    float num3 = num0 - 3;

    cout << "num0 : " << num0 << endl; // 1.5
    cout << "num1 : " << num1 << endl; // 2.25
    cout << "num2 : " << num2 << endl; // 0.75
    cout << "num3 : " << num3 << endl; // -1.5

    return 0;
}