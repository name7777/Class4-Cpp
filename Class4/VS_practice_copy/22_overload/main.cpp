#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

int main()
{
    cout << "Adding Integer number : " << add(13, 67) << endl;
    cout << "Adding float number : " << add(13.12f, 67.56) << endl; // f 지우면 에러나서 float을 명시하는 f 넣었음
    return 0;
}