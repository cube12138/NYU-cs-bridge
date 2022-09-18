//module 4.1 (week 2)
//two different oprater: / and %

#include <iostream>
using namespace std;

int main1() {

	const int DAYS_IN_A_WEEK = 7;
	int daysTraveled;
	int fullWeeks, remainingDays;
	cout << "please enter number of days you traveled:" << endl;
	cin >> daysTraveled;
	fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
	remainingDays = daysTraveled % DAYS_IN_A_WEEK;
	cout << daysTraveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days " << endl;

	system("pause");
	return 0;
}
