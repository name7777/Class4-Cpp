#include <iostream>
#include "header.h"

//using namespace std;
using namespace BooksInfo;

//struct Books
//{
//    char title[50];
//    char author[50];
//    char subject[100];
//    int book_id;
//};

//void PrintBooksInformation(struct Books book); // 1) Books struct를 book이라고 치환하여 함수화 선언

int main()
{
    struct Books book1;
    Books book2; // 앞에 struct를 생략해도 됨

    strcpy_s(book1.title, "Learn C++ Programing 21 days");
    strcpy_s(book1.author, "Wonhyun Kwon");
    strcpy_s(book1.subject, "C++ Programing in liquore");
    book1.book_id = 12345;
    PrintBooksInformation(book1); // 3) 정의한 함수를 여기서 사용. book자리에 위에 book1을 넣음

    strcpy_s(book2.title, "Learn C++ Programing 21 days");
    strcpy_s(book2.author, "Lee Jung");
    strcpy_s(book2.subject, "C++ Programing in liquore");
    book2.book_id = 67890;
    PrintBooksInformation(book2); // 위와 동일

    cout << "book1 title : " << book1.title << ", author : " << book1.author << ", subject : " << book1.subject << ", book_id : " << book1.book_id << endl;
    cout << "book2 title : " << book2.title << ", author : " << book2.author << ", subject : " << book2.subject << ", book_id : " << book2.book_id << endl;

    return 0;
}

//void PrintBooksInformation(struct Books book) // 2) 위에서 선언한 함수를 여기서 정의
//{
//    cout << "book title : " << book.title << ", author : " << book.author << ", subject : " << book.subject << ", book_id : " << book.book_id << endl;
//}

/*
 * 여기서 "동적할당"으로 하려면,
 * 1) struct Book* book 으로 동적할당 넣고,
 * 2) 끝 부분에 delete book1 + delete book2를 해주고,
 * 3) book1.title처럼 . 부분을 -> 애로우로 전부 바꿔준다.
*/