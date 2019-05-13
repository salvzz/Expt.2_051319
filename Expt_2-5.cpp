#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int count, next;
	int first = 0;
	int second = 1;
	int n = 22;

	cout << "Start counting Fibonacci Numbers! \n";
	
	for (count = 0; count < 22; count ++)
	{
		if (count < 2)
		{
			next = count;
			cout << next << ", ";
		}
		else 
		{
			next = first + second;
			first = second;
			second = next;
			cout << next << ", ";
		}
	}

	_getch();
	return 0;
}