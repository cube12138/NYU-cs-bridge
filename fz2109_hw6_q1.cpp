#include <iostream>
using namespace std;

int fib(int n) {
	int a, b, c;
	int num;
	a = 0;
	b = 0;
	num = 1;
	for (c = 1; c < n; c++)
	{
		a = b;
		b = num;
		num = a + b;
	}
	return num;
}

int main()
{
	int n;
	int output;
	cout << "Please enter a positive integer: ";
	cin >> n;
	output = fib(n);
	cout << output;

	return 0;
}
