// header파일에서 struct의 typedef를 사용한 예제임. header참고하고 이해할 것

#include <iostream>
#include "header.h"

using namespace BooksInfo;

int main()
{
    // typedef로 정의한 BooksTag를 쓸 수 있다라는 예제
    // typedef는 그냥 "별칭"이라고 생각하면 됨
    BooksTag* book1 = new BooksTag; // 휩 영역 메모리에 할당됐다 = "인스턴시에이징" 됐다
    BooksTag book2;

    strcpy_s(book1->title, "Learn C++ Programming 21 days");
    strcpy_s(book1->author, "Sieun Lee");
    strcpy_s(book1->subject, "C++ Programming in Liquor");
    book1->book_id = 14363636;
    PrintBooksInformation(book1);

    strcpy_s(book2.title, "Learn C++ Programming 21 days");
    strcpy_s(book2.author, "Hyein Lee");
    strcpy_s(book2.subject, "C++ Programming in Liquor");
    book2.book_id = 44423;
    PrintBooksInformation(&book2); // 주소값을 넘겨줌

    struct Books book3 = SetBooksInformation((char*)"Welcome to Hell in C++", (char*)"Bjane stroustoup", (char*)"Hell in the C++", 45636);
    PrintBooksInformation(&book3);


    delete book1;

    return 0;
}