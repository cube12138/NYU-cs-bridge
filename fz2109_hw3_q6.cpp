#include <iostream>
using namespace std;

int main()
{
	char day_firstchar, day_secondchar, temp;
	double hour, minute, length_minute;
	double cost_dollors;

	cost_dollors = 1;
	cout << "Please enter the day of the week: ";
	cin >> day_firstchar >> day_secondchar;
	cout << "please enter the time call started: ";
	cin >> hour >> temp >> minute;
	cout << "please enter the length of the call in minutes: ";
	cin >> length_minute;

	if ((day_firstchar == 'S' && day_secondchar == 'a') || (day_firstchar == 'S' && day_secondchar == 'u'))
	{
		cost_dollors = length_minute * 0.15;
		cout << cost_dollors << endl;
	}
	else
	{
		if (hour >= 8 && hour < 18) {
			cost_dollors = length_minute * 0.40;
			cout << cost_dollors << endl;
		}
		if (hour < 8 || hour >= 18) {
			cost_dollors = length_minute * 0.25;
			cout << cost_dollors << endl;
		}

	}


	return 0;
}