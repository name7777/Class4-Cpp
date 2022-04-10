#include <iostream>
#include <string>

using namespace std;

class CCar // ★ 선언부
{
public:
    // constructor : 보통 제일 위에 선언됨. 또한, "변수초기화" 용으로 많이 사용됨
    // 원래는 이 선언부는 헤더파일에 선언되는게 맞으나 보기 편하기 위해 cpp 하나에 모두 작성
    CCar(); // ★ Default constructor -> 없어도 되지만, 버릇을 들여놔야 한다 (안정성)
    CCar(string brand, string name, int year);

    string m_strBrand;
    string m_strName;
    int m_nYear;
};

// 이렇게 외부에 구현부를 cpp에 두는게 정석
// 절차지향에 상관없이 위에 선언부만 먼저 돼 있으면 구현부는 사실상 main 아래에 있든 위에 있든 상관은 없음. main이 알아서 이 구현부를 찾아옴
CCar::CCar(string brand, string name, int year) // ★ 구현부
{
    m_strBrand = brand;
    m_strName = name;
    m_nYear = year;
}

int main()
{
    CCar bmwCar("BMW", "X5", 2002);
    CCar audiCar("Audi", "A8", 2012);

    cout << bmwCar.m_strBrand << " : " << bmwCar.m_strName << ", " << bmwCar.m_nYear << endl;
    cout << audiCar.m_strBrand << " : " << audiCar.m_strName << ", " << audiCar.m_nYear << endl;

    return 0;
}