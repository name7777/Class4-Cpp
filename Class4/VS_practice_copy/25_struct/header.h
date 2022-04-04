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

	void PrintBooksInformation(struct Books book) // 2) 위에서 선언한 함수를 여기서 정의
	{
		cout << "book title : " << book.title << ", author : " << book.author << ", subject : " << book.subject << ", book_id : " << book.book_id << endl;
	}
}