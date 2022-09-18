//一个整数的各个位数相加是多少
#include <iostream>
using namespace std;

int main()
{
	int num;
	int sumDigits, countDigits;
	int currDigit;
	cout << "enter a positive number:";
	cin >> num;
	sumDigits = 0;
	countDigits = 0;
	while (num > 0)
	{
		currDigit = num % 10;
		countDigits++;
		sumDigits += currDigit;
		num = num / 10;
	}
	cout << num << "has" << countDigits << "digits" << endl;
	cout << "and their sum is" << sumDigits << endl;

	return 0;
}