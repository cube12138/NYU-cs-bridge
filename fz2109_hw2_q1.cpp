#include <iostream>
using namespace std;

int main()
{

	int quarters, dimes, nickels, pennies;
	int total_cents, dollers, remaining_cents;

	cout << "Please enter number of coins:" << endl;

	cout << "# of quarters:" << endl;
	cin >> quarters;

	cout << "# of dimes:" << endl;
	cin >> dimes;
	
	cout << "# of nickels:" << endl;
	cin >> nickels;

	cout << "# of pennies:" << endl;
	cin >> pennies;

	total_cents = 25 * quarters + 10 * dimes + 5 * nickels + 1 * pennies;

	dollers = total_cents / 100;

	remaining_cents = total_cents % 100;

	cout << "The total is " << dollers << " dollars and " << remaining_cents << " cents" << endl;


	return 0;
}