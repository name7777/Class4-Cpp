#include <iostream>

using std::cout; // 이전처럼 std 전부 다 쓰는게 아니라 std 안에 cout만 쓰겠다라고 선언

namespace first_space
{
    void myFunc()
    {
        cout << "This function is in first_space\n";
    }

    namespace third_space
    {
        void myFunc()
        {
            cout << "3rd myFunc\n";
        }
    }
}

namespace second_space
{
    void myFunc()
    {
        cout << "Hello World\n";
    }
}

using namespace first_space;

int main()
{
    std::string strHello = "Hello World!!"; // std::를 붙인 이유: 위에 namespace std를 전부사용하지 않고 cout만 사용했으므로 str관련 std가 없기 때문
    myFunc(); // first_space를 using했으므로 굳이 따로 선언안하고 myFunc()만 쓰면 furst_space 내 myFunc()을 인식
    second_space::myFunc(); // 이름이 동일하므로 using namespace를 쓰든 안쓰든 앞에 겹치는걸 방지하기 위해 namepsace::를 적어준다
    first_space::third_space::myFunc(); // 중첩namespace : first 안에 있는 third namespace의 myFunc

    return 0;
}