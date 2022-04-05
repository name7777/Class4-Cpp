#include <iostream>

using namespace std;

void increase(void* pData, int nSize); // 함수 선언(함수 프로토타입), ★원래는 솔루션 탐색기에서 헤더폴더-헤더파일 생성 후 거기에 선언하고 여기선 갖다 쓰기만 함

int main()
{
    char a = 'x';
    int b = 1024;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));
    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}

void increase(void* pData, int nSize) // 위에서 선언한 함수를 실행하는 실행부
{
    if (nSize == sizeof(char)) // type이 char라면
    {
        char* pChar;
        pChar = (char*)pData; // void의 형태를 char라고 제대로 명시하는 것 같은데?
        ++(*pChar); // 전위증가이든 후위증가이든 이 예제에서는 +1하는 return 값은 동일함
    }
    else if (nSize == sizeof(int)) // tpye이 int라면
    {
        int* pInt;
        pInt = (int*)pData; // 이것도 마찬가지로 void 형태를 int라고 제대로 명시하는 것 같음
        ++(*pInt);
    }
}