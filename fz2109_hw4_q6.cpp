#include <iostream>
using namespace std;

int main()
{
	int n, num;
	int divide, mod;
	int odd_number, even_number;


	cout << "Please enter an integer:";
	cin >> n;

	for (num = 1; num <= n; num++)
	{
		divide = num;
		odd_number = 0;
		even_number = 0;
		while (divide != 0)
		{
			mod = divide % 10;
			divide = divide / 10;


			if (mod % 2 == 1)
			{
				odd_number++;
			}
			else
			{
				even_number++;
			}
		}
		if (even_number > odd_number)
		{
			cout << num << endl;
		}
	}
	return 0;
}