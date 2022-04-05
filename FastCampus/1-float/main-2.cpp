#include <iostream>

using namespace std;

int main()
{
    float num0 = 1.0;
    double num1 = 1.0;
    long double num2 = 1.0;

    cout << sizeof(num0) << endl; // 4
    cout << sizeof(num1) << endl; // 8
    cout << sizeof(num2) << endl; // 12(이건 다른 플랫폼에서 하면 사이즈가 다르게 나옴. 여기선 12)

    // 원래는 1.0 자체가 double인데 그걸 float이나 long doulbe이 자체적으로 형변환을 한 것임
    // 밑에 f, L 등을 어떤 자료형인지 정확히 명시하기 위함 (위와 결과는 동일)
    cout << sizeof(1.0f) << endl;
    cout << sizeof(1.0) << endl;
    cout << sizeof(1.0L) << endl;
}