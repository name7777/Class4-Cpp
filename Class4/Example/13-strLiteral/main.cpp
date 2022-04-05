#include <iostream>

using namespace std;

void IncreasementAll(int* start, int* stop) // call by reference
{
    int* current = start; // 초기화
    while (current != stop)
    {
        ++(*current); // 내가 가리킨 주소에 있는 해당 value(역참조)에 ++
        ++current; // 내가 가리킨 주소(포인터)에 ++
    }
}

void PrintAll(const int* start, const int* stop)
{
    const int* current = start; //초기화
    while (current != stop)
    {
        cout << *current << endl; // value(역참조) 출력
        ++current;
    }
}

int main()
{
    int nNumbers[] = { 10, 20, 30 };
    IncreasementAll(nNumbers, nNumbers + 3); // 배열의 [] 없는 변수(nNumbers) '주소값'을 의미
    PrintAll(nNumbers, nNumbers + 3);
    
    cout << nNumbers << ", " << nNumbers + 3 << endl; // 위 주소값을 의미한다는 것에 대한 증명

    return 0;
}