#include <iostream>
#include <string> // <string>은 <iostream>에 내장 돼있기 때문에 따로 include를 안해줘도 된다

using namespace std;

int main()
{
    // 1. 문자열 concat
    // 문자 + 문자
    string firstName = "Wonhyun";
    string lastName = "Kwon";
    string fullName = firstName + ' ' + lastName;
    cout << fullName << endl;
    // append()
    string firstName2 = "Jung";
    string lastName2 = "Lee";
    string job = "Dancer";
    string fullName2 = firstName2.append(lastName2.append(job));
    cout << fullName2 << endl;


    // 2. 문자열 길이 : length() , size() - 동일 기능
    string strAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << strAlphabet.length() << endl;
    cout << strAlphabet.size() << endl;


    // 3. 문자열 - 배열처럼 사용
    string strHello = "Hello World";
    cout << strHello[0] << endl; // H
    strHello[0] = 'J'; // 다른 문자로 치환 가능
    for (int i = 0; i < strHello.size(); i++)
    {
        cout << strHello[i];
    }

    cout << endl;

    /* 4. getline()
    - 단순 cin은 공백을 받아들이지 못하고 공백 전까지만 받아들인다. 이를 해결하기 위해 getline()을 사용함
    - 2가지가 존재
    - (1) iostream 라이브러리 내 cin.getline()
    - (2) string 라이브러리 내 getline() - 하기 예제
    */

    string baseballTeam;
    cout << "Enter your favorite baseball team : ";
    getline(cin, baseballTeam);
    cout << baseballTeam << endl;

    return 0;
}