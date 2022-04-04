// header파일에서 struct를 return해준 예제임. header참고하고 이해할 것

#include <iostream>
#include "header.h"

using namespace BooksInfo;

int main()
{
    // 포인터로 사용가능. 동적할당.
    BooksInfo::Books* book1 = new BooksInfo::Books;
    Books book2;

    strcpy_s(book1->title, "Learn C++ Programming 21 days");
    strcpy_s(book1->author, "Sieun Lee");
    strcpy_s(book1->subject, "C++ Programming in Liquor");
    book1->book_id = 12423;
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