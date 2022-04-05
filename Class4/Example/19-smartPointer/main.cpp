// 이해가 잘 안가네. 나중에 다시 공부할 것

#include <iostream>
#include <memory> // 스마트 포인터를 사용하기 위해 필요한 lib

using namespace std;

class CPerson {
private:
    string strName;
    int nAge;
public:
    CPerson(const string& name, int age);
    ~CPerson() { cout << "Object Destructor" << endl; }
    void ShowPersonInfo();
};

int main()
{
    // 1) unique_ptr
    unique_ptr<CPerson> ptrPerson = make_unique<CPerson>("James Hetfield", 59); // make_unique: 초기화하기 위한 방법
    ptrPerson->ShowPersonInfo();
    return 0;

    // 2) shared_ptr
    // shared_ptr<CPerson> ptrPerson = make_shared<CPerson>("James Hetfield", 59);
    // ptrPerson->ShowPersonInfo();
    // cout << "Currently Own count : " << ptrPerson.use_count() << endl;
    // auto james = ptrPerson;
    // cout << "Currently Own count : " << ptrPerson.use_count() << endl;
    // ptrPerson->ShowPersonInfo();
    // james.reset();
    // cout << "Currently Own count : " << ptrPerson.use_count() << endl;
    // return 0;
}

CPerson::CPerson(const string& name, int age)
{
    strName = name;
    nAge = age;
    cout << "Object Constructor" << endl;
}

void CPerson::ShowPersonInfo()
{
    cout << strName << "'s Age : " << nAge << endl;
}