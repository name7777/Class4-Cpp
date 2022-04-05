#include <iostream>

using namespace std;

int main()
{
    // while
    cout << "while : ";
    int i = 0;
    while (i < 10)
    {
       cout << i << " ";
       i++;
    }
    cout << endl;


    // do while
    int j = 0;
    cout << "do while : ";
    do
    {
        cout << j << " ";
        j++;
    } while (j < 10);
    cout << endl;

    // for
    cout << "for loop i = ";
    for (int i = 0; i < 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    // ★ 2중 for문이 아닌데 2중 for문 처럼 쓸 수 있는 예제
    for (int n = 0, i = 100; n != i; ++n, --i)
    {
       cout << "n = " << n << ", i = " << i << endl;
    }
    cout << endl;

    // ★ 마치 map함수처럼 배열 또는 string을 넣으면 하나씩 조회
    cout << "Range-Based for loop i = ";
    int nArr[5] = { 1, 3, 5, 7, 9 };
    for (int i : nArr)
    {
        cout << i << " ";
    }
    cout << endl;

    // ★위와 동일하게 배열 대신 string을 넣어서 문자 하나씩 조회
    cout << "Range-Based for loop c = ";
    string str{ "Hello_World" }; // 또는 아래 char str[] 사용
    //char str[] = "Hello_World!!";
    for (char c : str)
    {
        cout << c << " ";
    }

    return 0;
}