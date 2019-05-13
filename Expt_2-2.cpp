#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int WaterDemand = 35;
	float UseCharge = 1.10;
	int LateFee = 20;
	float WaterConsumed, RemainingBalance, TotalFee;
	cout << setprecision(2) << fixed << showpoint;

	cout << "Water consumed per gallon: \n";
	cin >> WaterConsumed;
	cout << "How much is the remaining balance? \n";
	cin >> RemainingBalance;

	if ( RemainingBalance > 0 )
	{
		TotalFee = WaterDemand + (WaterConsumed*UseCharge) + RemainingBalance + LateFee;
		cout << "Total:" << TotalFee <<  " pesos";
	}

	else 
	{
		TotalFee = WaterDemand + (WaterConsumed*UseCharge);
		cout << "Total:" << TotalFee << " pesos";
	}

	_getch();
	return 0;
}
