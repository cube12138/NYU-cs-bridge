#include <iostream>
using namespace std;

int main()
{

	int days_John, hours_John, minutes_John;
	int days_Bill, hours_Bill, minutes_Bill;
	int days, hours, minutes;

	cout << "Please enter the number of days John has worked:" << endl;
	cin >> days_John;

	cout << "Please enter the number of hours John has worked:" << endl;
	cin >> hours_John;

	cout << "Please enter the number of minutes John has worked:" << endl;
	cin >> minutes_John;

	cout << "Please enter the number of days Bill has worked:" << endl;
	cin >> days_Bill;

	cout << "Please enter the number of hours Bill has worked:" << endl;
	cin >> hours_Bill;

	cout << "Please enter the number of minutes Bill has worked:" << endl;
	cin >> minutes_Bill;

	days = days_John + days_Bill + ((hours_John + hours_Bill) / 24); 
	hours = ((hours_John + hours_Bill) % 24) + ((minutes_John + minutes_John) / 60);
	minutes = (minutes_Bill + minutes_John) % 60;

	cout << "The total time both of them worked together is: " << days << " days " << hours << " hours " << minutes << " minutes." << endl;

	return 0;
}