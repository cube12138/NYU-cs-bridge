#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num);
int main()
{
	int num;
	cout << "Please enter a positive integer >= 2: ";
	cin >> num;
	printDivisors(num);

	return 0;
}
void printDivisors(int num) {
	int divisor;
	for (divisor = 1; divisor <= sqrt(num); divisor++)
	{
		if (num % divisor == 0)
		{
			cout << divisor << " ";
		}

	}
	for (divisor = sqrt(num) - 1; divisor >= 1; divisor--)
	{
		if (num % divisor == 0)
		{
			int k = num / divisor;
			cout << k << " ";
		}
	}

}