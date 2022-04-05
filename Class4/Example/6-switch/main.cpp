#include <iostream>

using namespace std;

int main()
{
	int time = 17;
	int wDay = 5;

	if (time < 10)
	{
		cout << "Good Morning class BLOCK4";
	}
	else if (time < 20)
	{
		cout << "Good day class Block4";
	}
	else
	{
		cout << "Good evening class Block4";
	}

	cout << "\r\n";

	if (wDay < 0)
		return 129;

	switch (wDay)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Tursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Nonday";
		break;
	}

	return 0;
}