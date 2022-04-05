#include <iostream>

using namespace std;

int main()
{
    // 예제1
    int grade[3] = { 85, 65, 90 }; // [] 안에 숫자를 줘도 되고 안줘도 됨. 안주면 자동으로 체크해서 그 배열 크기만큼 늘어남

    cout << "Address of array : " << grade << endl; // ★★ grade라는 배열이 저장 돼있는 '주소값' 출력. 배열의 주소값은 항상 'grade = grade[0]' 주소와 일치
    for (int i = 0; i < 3; i++)
    {
        cout << "grade[" << i << "] : " << &grade[i] << endl; // &: 참조연산자(메모리를 참조한다) -> 주소를 출력할 수 있음
    }


    // 예제2
    string itCompany[5] = { "Apple", "Microsoft", "IBM", "Amazon", "ESP Guitar" }; // 5는 index의 '개수'
    cout << "itcompany[4] : " <<  itCompany[4] << endl; // [4] = ESP Guitar
    itCompany[0] = "Snakebyte Guitar"; // 0번째 방 value 바꿈 (Apple -> Snakebyte Guitar)
    for (string str : itCompany)
    {
        cout << str << endl;
    }

    for (int i = 0; i < (sizeof(itCompany) / sizeof(itCompany[0])); i++)
        cout << "itCompany[" << i << "] : " << itCompany[i] << endl
        << "How much size of array each other? " << sizeof(itCompany[i]) << endl; // 각 인덱스의 size는 24
        
    cout << "How much size of array? " << sizeof(itCompany) << endl; // 배열 총 크기는 120 (24x5)


    return 0;
}