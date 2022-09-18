#include <iostream>
using namespace std;

int main()
{
	int num, count_M, count_D, count_C, count_L, count_X, count_V, count_I;
	int number_M, number_D, number_C, number_L, number_X, number_V, number_I;
	cout << "Enter decimal number: " << endl;
	cin >> num;
	cout << num << " is ";

	number_M = num / 1000;
	for (count_M = 0; count_M < number_M; count_M++)
	{
		cout << "M";
	}
	number_D = (num % 1000) / 500;
	for (count_D = 0; count_D < number_D; count_D++)
	{
		cout << "D";
	}
	number_C = ((num % 1000) % 500) / 100;
	for (count_C = 0; count_C < number_C; count_C++)
	{
		cout << "C";
	}
	number_L = (((num % 1000) % 500) % 100) / 50;
	for (count_L = 0; count_L < number_L; count_L++)
	{
		cout << "L";
	}
	number_X = ((((num % 1000) % 500) % 100) % 50) / 10;
	for (count_X = 0; count_X < number_X; count_X++)
	{
		cout << "X";
	}
	number_V = (((((num % 1000) % 500) % 100) % 50) % 10) / 5;
	for (count_V = 0; count_V < number_V; count_V++)
	{
		cout << "V";
	}

	number_I = ((((((num % 1000) % 500) % 100) % 50) % 10) % 5) / 1;
	for (count_I = 0; count_I < number_I; count_I++)
	{
		cout << "I";
	}


	return 0;
}