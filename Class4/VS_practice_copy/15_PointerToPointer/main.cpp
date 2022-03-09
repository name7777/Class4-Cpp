#include <iostream>

int main()
{
    char a;
    char* b;
    char** c; // 이중 포인터

    a = 'z';
    b = &a;
    c = &b;

    std::cout << **c << std::endl; // 이중 포인터 value 출력은 '**'

    return 0;
}
