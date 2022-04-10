#include <iostream>
#include <string>
#include "header.h"
#include "class.h"

int main()
{
    CBooks booksObj; // CBooks란 Class를 booksObj로 치환
    booksObj.PrintBookInformation(); // 앞에서 constructor로 초기화 된 값이 제일 먼저 출력 됨

    booksObj.m_Title = "Learning C++ 21 days";
    booksObj.m_Author = "Wonhyun Kwon";
    booksObj.m_Subject = "Learning C++ Programing";
    booksObj.m_nBookId = 19910725;

    booksObj.PrintBookInformation();

    CBooks cppBook;
    cppBook.m_Title = "Learning C++ in Hell";
    cppBook.m_Author = "Lee Jung";
    cppBook.m_Subject = "Learning C++ Programing in Street";
    cppBook.m_nBookId = 19990213;

    cppBook.PrintBookInformation();

    CCar carObj;
    carObj.m_strCompany = "BMW";
    carObj.m_strCarName = "BMW X5";
    carObj.m_strCarNo = "NY 3456";
    carObj.PrintCarInformation();

    cout << carObj.m_strCarName << " : Maximum Speed = " << carObj.CarSpeed(220) << endl;

    return 0;
}