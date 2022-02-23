#include <iostream>

using namespace std;

void abc(int& x) // �� ���ڸ� ref�� �������μ� ������ ���� ���� �ٲ��. ���� ���� �ܼ� ���ڸ� ������ �ٲ��� ���� (call by value vs call by reference)
{
    x = 100;
    cout << x << endl;
}

int main()
{
    string food = "Pizza";
    string& meal = food; // �� ���� �� &�� '����'�� �ǹ��ϰ� ������ ref�� �ؿ��� ������ �� &�� �ּҰ��� �ǹ�. ���� �� &������ food�� �����ϰ� value�� ��ȯ
    cout << food << "  , value is equal = " << meal << endl; // �Ѵ� �Ȱ��� ���̴�
    cout << &food << " , memory address is equal = " << & meal << endl;

    meal = "Hamburger";
    cout << food << " , value is equal =  " << meal << endl; // �Ѵ� �Ȱ��� ���̴�
    cout << &food << " , memory address is equal = " << &meal << endl;

    int xx = 200;
    abc(xx);
    cout << "xx : " << xx << endl; // xx�� 100���� ���Ѹ��. ��? �޸𸮸� �����߱� ������ �� �ش� ������ �ٲ�

    return 0;
}