#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int hours, total;
	char package;

	const int packageA = 995;
	const int packageB = 1495;
	const int packageC = 1995;

	cout << "What is your desired package? (Please input answer in CAPITAL letters only):  \n";
	cin >> package;
	cout << "Number of additional hours used: \n";
	cin >> hours;

	switch (package)
	{
		case 'A':
			cout << "Total Monthly Bill:";
			total = packageA + (hours*20);
			cout << total << " pesos";
			break;
		case 'B':
			cout << "Total Monthly Bill:";
			total = packageB + (hours*10);
			cout << total << " pesos";
			break;
		case 'C':
			cout << "Total Monthly Bill:";
			cout << "1995 pesos";
			break;
		default:
			cout << "Invalid input";
	}
	_getch();
	return 0;
}
