//trans24 hours to 12 hours
// notice: if branching; and variable like string, char
#include <iostream>
using namespace std;

int main(){
	int hour24, minutes24;
	int hour12, minutes12;
	string period;
	char temp;


	cout << "please enter a time in a 24-hour format" << endl;
	cin >> hour24 >> temp >> minutes24;
	minutes12 = minutes24;
	if (hour24>=0 &&hour24<=11)
	{
		period = "am";
		if (hour24 == 0)
			hour12 = 12;
		else
			hour12 = hour24;
	}
	else
	{
		period = "pm";
		if (hour24 == 12)
			hour12 = 12;
		else
			hour12 = hour24 - 12;
	}
	cout << hour12 << temp << minutes12 <<period<< endl;

		return 0;
}