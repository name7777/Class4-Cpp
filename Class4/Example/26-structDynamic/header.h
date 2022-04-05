#pragma once

using namespace std;

namespace BooksInfo
{
    struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    };

    void PrintBooksInformation(struct Books* book)
    {
        cout << "book title : " << book->title << ", author : " << book->author << ", subject : " << book->subject << ", book -> book_id : " << book->book_id << endl;
    }

    struct Books SetBooksInformation(char* title, char* author, char* subject, int bookId)
    {
        struct Books book;

        strcpy_s(book.title, _countof(book.title), title);
        strcpy_s(book.author, _countof(book.author), author);
        strcpy_s(book.subject, _countof(book.subject), subject);
        book.book_id = bookId;

        return book;
    }
}