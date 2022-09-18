//Fangtong Zhao  fz2109

#include <iostream>
using namespace std;

int main1()
{
	int user_inch, sum, day;
	int yards, feet, inches, divide;
	user_inch = 1;
	sum = 0;
	day = 0;

	while (user_inch != -1)
	{
		cout << "Enter the number of inches the snail traveled in day #1, or type - 1 if they reached their destination:" << endl;
		cin >> user_inch;
		sum += user_inch;
		day++;
	}

	sum = sum + 1;
	day = day - 1;
	inches = sum % 12;
	divide = sum / 12;
	yards = divide / 3;
	feet = divide % 3;
	cout << "In " << day << " days, the snail traveled " << yards << " yards, " << feet << " feet and " << inches << " inches.";



	return 0;
}