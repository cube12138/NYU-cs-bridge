#include <iostream>
using namespace std;

int main()
{
	int linecount, n;
	int spacecount_front, starcount, spacecount_behind;

	cout << "Please enter an integer:" << endl;
	cin >> n;
	for (linecount = 1; linecount <= n; linecount += 1)
	{
		for (spacecount_front = 0; spacecount_front < (linecount - 1); spacecount_front++)
		{
			cout << " ";
		}
		for (starcount = 0; starcount < (2 * (n - linecount) + 1); starcount++)
		{
			cout << "*";
		}
		for (spacecount_behind = 0; spacecount_behind <= (linecount - 1); spacecount_behind++)
		{
			cout << " ";
		}
		cout << endl;
	}
	for (linecount = 1; linecount <= n; linecount += 1)
	{
		for (spacecount_front = 0; spacecount_front < (n - linecount); spacecount_front++)
		{
			cout << " ";
		}
		for (starcount = 0; starcount < (2 * linecount - 1); starcount++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
