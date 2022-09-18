//Fangtong Zhao  fz2109

#include <iostream>
using namespace std;

int main2()
{
	char inletter;
	int n, line_number;
	int front_space, behind_space, letter, small_letter, big_letter;

	cout << "Please enter a lower-case letter:" << endl;
	cin >> inletter;
	n = (int)inletter - 96;

	small_letter = 97;
	big_letter = 66;
	for (line_number = 1; line_number <= n; line_number++)
	{
		for (front_space = 1; front_space <= (n - line_number); front_space++)
		{
			cout << " ";
		}
		if (line_number % 2 == 1)
		{
			for (letter = 1; letter <= (2 * line_number - 1); letter++)
			{
				cout << (char)small_letter;
			}
			small_letter += 2;
		}
		else
		{
			for (letter = 1; letter <= (2 * line_number - 1); letter++)
			{
				cout << (char)big_letter;
			}
			big_letter += 2;
		}

		for (behind_space = 1; behind_space <= n - line_number; behind_space++)
		{
			cout << " ";
		}

		cout << endl;

	}





	return 0;
}