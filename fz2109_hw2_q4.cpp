#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int add, subtrate, multiply, div, mod;
	double divide, a, b;

	cout << "Please enter two positive integers, separated by a space:" << endl;
	cin >> num1 >> num2;

	add = num1 + num2;
	subtrate = num1 - num2;
	multiply = num1 * num2;
	a = (int)num1;
	b = (int)num2;
	divide = a / b;
	div = num1 / num2;
	mod = num1 % num2;

	cout << num1 << " + " << num2 << " = " << add << endl;
	cout << num1 << " - " << num2 << " = " << subtrate << endl;
	cout << num1 << " * " << num2 << " = " << multiply << endl;
	cout << num1 << " / " << num2 << " = " << divide << endl;
	cout << num1 << " div " << num2 << " = " << div << endl;
	cout << num1 << " mod " << num2 << " = " << mod << endl;


	return 0;
}