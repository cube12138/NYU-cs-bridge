#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num, n;
	int divide, count, power;

	cout << "Enter decimal number:" << endl;
	cin >> num;
	if (num == 2)
	{
		cout << "The binary representation of " << num << " is" << "10";
	}
	else
	{
	for (n = 1; n < (log(num) / log(2)); n++) {}

	cout << "The binary representation of " << num << " is ";

	for (count = n - 1; count >= 0; count = count - 1)
	{
		power = pow(2, count);
		divide = num / power;

		num = num % power;
		cout << divide;
	}
	}
	return 0;
}