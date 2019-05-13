#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double V;
	double z = 2.5;
	double x, y;
	char value;

	cout << "Value of x: \n";
	cin >> value;

	switch (value)
	{
		case 'A':
			cout << "Value of y: \n";
			cin >> y;

			if (y>1 && y <5)
			{
				x = 1; 
				z = 2.5;
				V = x*y*z;
				cout << "V= "; 
				break;
			}
			else if ( y >= 5)
			{ 
				x = 1;
				V = x + (y/z);
				cout << "V= "; 
				break;
			}

		case 'B':
			cout << "Value of y: \n";
			cin >> y;

			if (y <= 5)
			{
				x = 2;
				V = abs (x + y)/z;
				cout << "V= "; 
				break;
			}
			else if (y > 5)
			{
				x = 2;
			    V = x - sqrt(y + z);
				cout << "V= "; 
				break;
			}

		default:
			{ 
				V = x + y + z;
				cout << "V= "; 
				break;
			}
			cout << setprecision(2) << fixed << V << endl;
			std :: cout << std :: setw(10);
	}

	_getch();
	return 0;
}
	

