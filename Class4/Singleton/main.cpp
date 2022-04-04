#include "Singleton.cpp"

int main(int argc, char** argv)
{
   CSingleton* ps1 ,*ps2;

   ps1 = CSingleton::getInstatnce();
   ps2 = CSingleton::getInstatnce();

   ps1->HelloWorld();
   ps2->HelloWorld();
   CSingleton::getInstatnce()->HelloWorld();

   //ps1->DestroyInst();
   //or
   CSingleton::DestroyInst();

   return 0;
}