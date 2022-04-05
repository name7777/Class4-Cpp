/* #
 * ��ó���⿡�� �а� �ؼ��ϴ� ���ù�
 * �������� ���۵Ǳ� ���� �ؼ��Ǵ� Ư������
*/
#include <iostream> // C++���� ����ϴ� ǥ�� ����� �������
#include <stdio.h> // C���� ����ϴ� ǥ�� ����� �������. input = Ű����, output = �����

#pragma once // Visual Studio���� �����ϴ� ��ó����μ�, '��� �ڵ峪 ��������� �ٸ� �ڵ峪 ������� include �� �� �ߺ��Ǿ� ����Ǵ� ���� �����ϴ� ���'
#define WIDTH 1024 // #define = const�� ������ ���. ������ WIDTH��� ������ 1024 ������ Ī�ϰڴٴ� ��. define�� �������� ������. �ܼ� �����Ӹ� �ƴ϶� ��ũ�ε� ����

using namespace std;

int main()
{
    int nNum = 6;
    float fNum = 6.12345678;
    double dNum = 8.123456780123456;
    char cLetter = 'A';
    bool isVal = true, isFalse = false;
    string strText = "Hello\tWorld!!\b"; // \t: tab���� ��� \b: �ϳ��� ����
    int isNumber = true;

    cout << "int : " << nNum << endl;
    cout.precision(7); // precision(n): ���� ū �ڸ������� n�ڸ��� ����Ѵ�
    cout << "float : " << fixed << fNum << endl; // fixed: �Ҽ��� �ڸ��� ����
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
    char chAA = 65; // 0x41�μ� A ǥ����
    char chBB = 66; // 0x42�μ� B ǥ����
    char chCC = 67; // 0x43�μ� C ǥ����

    cout << "chA : " << chA << endl;
    cout << "chAA : " << chAA << endl;
    cout << "chBB : " << chBB << endl;
    cout << "chCC : " << chCC << endl;

    return 0;
}