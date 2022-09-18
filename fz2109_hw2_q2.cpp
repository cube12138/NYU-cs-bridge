#include <iostream>
using namespace std;

int main()
{
	int quarters, dimes, nickels, pennies;
	int total_cents, dollers, cents;
	int r_quarters, r_dimes, r_nickels;

	cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
	cin >> dollers >> cents;
	total_cents = 100 * dollers + cents;

	quarters = total_cents / 25;
	r_quarters = total_cents % 25;
	
	dimes = r_quarters / 10;
	r_dimes = r_quarters % 10;

	nickels = r_dimes / 5;
	r_nickels = r_dimes % 5;

	pennies = r_nickels / 1;

	cout<< dollers << " dollars and " << cents << " cents are:" << endl;
	cout << quarters << " quarters, " << dimes << " dimes, "<<nickels << " nickels and "<< pennies<<" pennies" << endl;

	return 0;
}