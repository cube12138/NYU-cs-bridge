#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
void printYearCalender(int year, int startingDay);
int main()
{
	int year, startingDay;
	cout << "please enter the year and the start day of that year separated by space:";
	cin >> year >> startingDay;
	printYearCalender(year, startingDay);
	return 0;
}
int printMonthCalender(int numOfDays, int startingDay) {
	int row_number;
	int row_in_here, column_in_here;
	int space_number, row_one_char;
	int return_days;
	if (startingDay > 7)
	{
		startingDay = startingDay % 7;
	}


	row_number = 1 + (numOfDays - (7 - (startingDay - 1))) / 7;
	if ((numOfDays - (7 - (startingDay - 1))) % 7 != 0)
	{
		row_number = row_number + 1;
	}
	else
	{
		row_number = row_number;
	}
	cout << "Mon\t" << "Tue\t" << "Wed\t" << "Thr\t" << "Fri\t" << "Sat\t" << "Sun\t" << endl;

	for (space_number = 1; space_number <= startingDay - 1; space_number++)
	{
		cout << " " << "\t";
	}
	for (row_one_char = 1; row_one_char <= (7 - (startingDay - 1)); row_one_char++)
	{
		cout << row_one_char << "\t";
	}
	cout << endl;


	for (row_in_here = 2; row_in_here <= row_number; row_in_here++)
	{

		for (column_in_here = 1; column_in_here <= 7; column_in_here++)
		{
			if (row_one_char <= numOfDays)
			{
				cout << row_one_char << "\t";
				row_one_char++;

			}
		}
		cout << endl;
	}

	return_days = (numOfDays - (8 - startingDay)) % 7;
	if (return_days == 0)
	{
		return_days = 7;
	}
	else
	{
		return_days = return_days;
	}
	return return_days;
}
void printYearCalender(int year, int startingDay) {
	int feb_day;
	if (year % 400 == 0) {
		feb_day = 29;
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		feb_day = 29;
	}
	else {
		feb_day = 28;
	}
	int start_day = startingDay;
	cout << "January  " << year << endl;
	start_day = printMonthCalender(31, start_day);
	cout << "\n";

	cout << "February  " << year << endl;
	start_day = printMonthCalender(feb_day, start_day + 1);
	cout << "\n";

	cout << "March  " << year << endl;
	start_day = printMonthCalender(31, start_day + 1);
	cout << "\n";

	cout << "April  " << year << endl;
	start_day = printMonthCalender(30, start_day + 1);
	cout << "\n";

	cout << "May  " << year << endl;
	start_day = printMonthCalender(31, start_day + 1);
	cout << "\n";

	cout << "June  " << year << endl;
	start_day = printMonthCalender(30, start_day + 1);
	cout << "\n";

	cout << "July  " << year << endl;
	start_day = printMonthCalender(31, start_day + 1);
	cout << "\n";

	cout << "August  " << year << endl;
	start_day = printMonthCalender(31, start_day + 1);
	cout << "\n";

	cout << "September  " << year << endl;
	start_day = printMonthCalender(30, start_day + 1);
	cout << "\n";

	cout << "October  " << year << endl;
	start_day = printMonthCalender(31, start_day + 1);
	cout << "\n";

	cout << "November  " << year << endl;
	start_day = printMonthCalender(30, start_day + 1);
	cout << "\n";

	cout << "December  " << year << endl;
	start_day = printMonthCalender(31, start_day + 1);
	cout << "\n";


}