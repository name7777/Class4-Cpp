#pragma once

using namespace std;

namespace BooksInfo
{
    typedef struct Books // typedef: Books라는 struct를 BooksTag라고 "별칭"을 짓기 위함
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } BooksTag;

    void PrintBooksInformation(BooksTag* book)
    {
        cout << "book title : " << book->title << ", author : " << book->author << ", subject : " << book->subject << ", book -> book_id : " << book->book_id << endl;
    }

    BooksTag SetBooksInformation(char* title, char* author, char* subject, int bookId)
    {
        BooksTag book;

        strcpy_s(book.title, _countof(book.title), title);
        strcpy_s(book.author, _countof(book.author), author);
        strcpy_s(book.subject, _countof(book.subject), subject);
        book.book_id = bookId;

        return book;
    }
}