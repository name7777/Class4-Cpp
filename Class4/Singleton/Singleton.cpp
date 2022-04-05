#include <iostream>

using namespace std;

class CSingleton
{
private:
   CSingleton();
   ~CSingleton();

private:
   static CSingleton* m_pInst;

public:
   int count;
   static CSingleton* getInstatnce();
   static void DestroyInst();
   void HelloWorld();
};

CSingleton* CSingleton::m_pInst = nullptr;

CSingleton::CSingleton()
{
    count = 0;
}

CSingleton::~CSingleton()
{

}

CSingleton* CSingleton::getInstatnce()
{
    if (!m_pInst)
    {
        m_pInst = new CSingleton();
    }
    return m_pInst;
}

void CSingleton::DestroyInst()
{
    if (!m_pInst)
    {
        return;
    }
    delete m_pInst;
    m_pInst = nullptr;
}

void CSingleton::HelloWorld()
{
    count ++;
    cout << "HelloWorld!!!-count(" << count << ")" << endl;
}
