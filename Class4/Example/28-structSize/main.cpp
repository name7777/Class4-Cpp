#include <iostream>

using namespace std;

#pragma pack (push, 1) //지금 이 구조체에 대해서만 pragma로 감싸서 그렇게 이용하겠다 라는 뜻
struct ExamSize1
{
    char a;
    int b;
    double c;
};
#pragma pack (pop) // 이건 pragma의 pack 해제

struct ExamSize2
{
    char a;
    int b;
    double c;
};

int main(int argc, char* argv[])
{
    cout << "Structure ExamSize's each Member variable size : " << endl;
    cout << "char : " << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl; // 결과 1, 4, 8 = 총 13

    cout << "Size of structure : " << sizeof(ExamSize1) << endl; // 결과 13
    cout << "Size of structure : " << sizeof(ExamSize2) << endl; // 결과 16

    return 0;
}

/*
 * 왜 결과값이 틀린가?
 * -> Notion에 정리했으니 참고
*/