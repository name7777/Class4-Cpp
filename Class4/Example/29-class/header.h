#pragma once
#include <iostream>
#include <string>

using namespace std;

class CBooks // 이건 class의 아주 기본적인 예제이기 때문에 struct와 큰 차이가 없어보인다
{
public:
    // 1) struct(구조체)
    string m_Title;
    string m_Author;
    string m_Subject;
    int m_nBookId;

    // 2) constructor(객체 생성자) - 제일 먼저 생성됨 -> "변수 초기화" 기능으로 활용됨
    CBooks()
    {
        cout << "CBooks Object Constructor!!" << endl;
        m_Title = "Learning javascript 21 days"; // Title 변수 초기화
        m_Author = "Bla Bla Foo"; // Author 변수 초기화
        m_Subject = "Subject initial"; // Subject 변수 초기화
        int m_nBookId = 123; // m_nBookId 변수 초기화
    }; 

    void PrintBookInformation(); // class 내 함수 선언부
};

void CBooks::PrintBookInformation() // class 내 함수 실행부 ("아웃사이드" 형태)
{
    cout << "Book title : " << m_Title << endl;
    cout << "Book author : " << m_Author << endl;
    cout << "Book subject : " << m_Subject << endl;
    cout << "Book id : " << m_nBookId << endl;
}

/*
 * "인사이드" 형태는 CBooks가 클래스 안으로 들어가서 선언과 동시에 실행시키면 됨
 * .h vs .hpp
 * .h는 함수 선언까지만 해놨을 때 보통 쓰고
 * .hpp는 함수 선언은 물론 구현부 까지 있을 때 보통 hpp를 쓴다
*/