/* #
 * 전처리기에서 읽고 해석하는 지시문
 * 컴파일이 시작되기 전에 해석되는 특수라인
*/
#include <iostream> // C++에서 사용하는 표준 입출력 헤더파일
#include <stdio.h> // C에서 사용하는 표준 입출력 헤더파일. input = 키보드, output = 모니터

#pragma once // Visual Studio에서 지원하는 전처리기로서, '어떠한 코드나 헤더파일이 다른 코드나 헤더에서 include 될 때 중복되어 복사되는 것을 방지하는 기능'
#define WIDTH 1024 // #define = const와 동일한 기능. 앞으로 WIDTH라는 변수를 1024 값으로 칭하겠다는 뜻. define은 가독성을 높여줌. 단순 변수뿐만 아니라 매크로도 ㅏ능

using namespace std;

int main()
{
    int nNum = 6;
    float fNum = 6.12345678;
    double dNum = 8.123456780123456;
    char cLetter = 'A';
    bool isVal = true, isFalse = false;
    string strText = "Hello\tWorld!!\b"; // \t: tab으로 띄움 \b: 하나를 지움
    int isNumber = true;

    cout << "int : " << nNum << endl;
    cout.precision(7); // precision(n): 가장 큰 자리수부터 n자리를 출력한다
    cout << "float : " << fixed << fNum << endl; // fixed: 소수점 자릿수 고정
    cout.precision(15);
    cout << "double : " << fixed << dNum << endl;
    cout << "char : " << cLetter << endl;
    cout << "bool isVal : " << isVal << ", bool isFalse : " << isFalse << ", isNumber : " << isNumber << endl;
    cout << "string : " << strText << endl;

    cout << "============================" << endl;

    int f1 = 24e3; // 24 x 1000
    double d1 = 15E4; // 15 x 10000
    cout << "f1 : " << f1 << ", d1 : " << d1 << endl;

    char chA = 'A';
    char chAA = 65; // 0x41로서 A 표현식
    char chBB = 66; // 0x42로서 B 표현식
    char chCC = 67; // 0x43로서 C 표현식

    cout << "chA : " << chA << endl;
    cout << "chAA : " << chAA << endl;
    cout << "chBB : " << chBB << endl;
    cout << "chCC : " << chCC << endl;

    return 0;
}