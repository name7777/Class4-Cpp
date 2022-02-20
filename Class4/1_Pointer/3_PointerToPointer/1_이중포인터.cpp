#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    void* b = &a;

    // cout << *b << endl; // 100을 기대하지만, 오류가 뜸 -> 무엇을 참조해야할지 모르기 때문 -> ★형변환을 해줘야함
    
    // ★즉, 이중포인터는 단순히 '주소값'만을 가리킨다
    cout << b << endl; // int a의 메모리 주소를 가리킴

    /* ★'형변환'을 해줬을 때 *b 출력
     * "너가 가리키고 있는 데이터 자료형은 int형이야. 그러니 4byte만 읽으면 돼!" 라고 형변환을 해준 형태
     * *(int*)b => *b를 출력하기 위해서 int*로 void*를 int로 명시해준 형태 즉, *(void*)b => *(int*)b
    */
    cout << *(int*)b << endl;

    // cf) void 포인터는 어떤 자료형이건 바로 참조가 가능하기 때문에 '동적할당' 할 때 유용하게 사용됨
    
    return 0;
}