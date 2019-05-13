#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int count;
	cout << "Start counting \n";
	count = 1;

	for (count = 1;	count < 11; count ++)
	{
		cout << count << ", ";
		if (count == 10)
		break;
	}

	for (count = 12; count < 31; count += 2)
	{
		cout << count << ", ";
		if (count == 30)
		break;
	}

	_getch();
	return 0;

}