#include <iostream>
using namespace std;

int main()
{
	int graduation_year, current_year, gap_year;
	string name, status;

	cout << "Please enter your name:";
	cin >> name;
	cout << "Please enter your graduation year:";
	cin >> graduation_year;
	cout << "Please enter current year:";
	cin >> current_year;

	gap_year = graduation_year - current_year;
	if (gap_year >= 0)
	{
		switch (gap_year)
		{
		case 0:
			status = "graduated";
			break;
		case 1:
			status = "senior";
			break;
		case 2:
			status = "junior";
			break;
		case 3:
			status = "sophomore";
			break;
		case 4:
			status = "Freshman";
			break;
		default:
			status = "not in college yet";
		}
		cout << name << ", " << "you are a " << status << endl;
	}
	else
	{
		cout << name << ", " << "you graduated at " << graduation_year << endl;

	}
	
	return 0;
}