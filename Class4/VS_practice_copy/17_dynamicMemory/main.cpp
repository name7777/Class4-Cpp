#include <iostream>

using namespace std;

int main()
{

	// // 예제1
	// int* ptrInt = new int; // ★ new: 동적할당연산자
	// *ptrInt = 1024;

	// double* ptrDouble = new double; // ★ new: 동적할당연산자
	// *ptrDouble = 3.141592;

	// cout << "Int type ptr value : " << *ptrInt << endl;
	// cout << "Double type ptr value : " << *ptrDouble << endl;

	// if (ptrInt != NULL)
	// {
	//    delete ptrInt;
	//    ptrInt = NULL; // 깔끔하게 하기 위한 개발자들의 습관
	// }

	// if (ptrDouble != NULL)
	// {
	//    delete ptrDouble;
	//    ptrDouble = NULL; // 깔끔하게 하기 위한 개발자들의 습관
	// }


	// 예제2
	char* pChar = new char;
	*pChar = 'a';
	cout << "Momory address : " << (void*)pChar << "\t value : " << *pChar << endl; // 여기서 (void*)pChar는 그냥 pChar라고 써서 주소값을 반환하는 거랑 마찬가지임. void 모르면 내가 정리한 노션 다시 볼 것
	cout << "Heap size : " << sizeof(*pChar) << endl;
	if (pChar != NULL)
	{
		delete pChar;
		pChar = NULL;
	}

	int* ptrNum = new int;
	*ptrNum = 24;
	cout << "Momory address : " << (void*)ptrNum << "\t value : " << *ptrNum << endl;
	cout << "Heap size : " << sizeof(*ptrNum) << endl;
	if (ptrNum != NULL)
	{
		delete ptrNum;
		ptrNum = NULL;
	}

	float* ptrFNum = new float;
	*ptrFNum = 3.141592;
	cout << "Momory address : " << (void*)ptrFNum << "\t value : " << *ptrFNum << endl;
	cout << "Heap size : " << sizeof(*ptrFNum) << endl;
	if (ptrFNum != NULL)
	{
		delete ptrFNum;
		ptrFNum = NULL;
	}

	double* ptrDNum = new double;
	*ptrDNum = 3.141592;
	cout << "Momory address : " << (void*)ptrDNum << "\t value : " << *ptrDNum << endl;
	cout << "Heap size : " << sizeof(*ptrDNum) << endl;
	if (ptrDNum != NULL)
	{
		delete ptrDNum;
		ptrDNum = NULL;
	}

	// C++은 new랑 delete만 쓰면 동적할당 가능함. C는 calloc이랑 malloc이런거 써야되는데 C++은 new delete로만 사용하면 되는거라 훨씬 편하다가 결론

	return 0;
}