#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    CLine* line = new CLine(); // default constructor
    
    line->SetLength(120.123);
    cout << "The Line Length : " << line->GetLength() << endl;
    delete line; // 여기서 다 쓰고나서 지웠음. 이게 함수를 쓰고 원할 때 반납하는거니까 동적할당이 더 효율적임

    cout << "After deleted line" << endl;

    return 0;
}