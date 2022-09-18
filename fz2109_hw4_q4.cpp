#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double n, num, count, x;
	double m, output;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);


	cout << "section a" << endl;
	cout << "Please enter the length of the sequence:";
	cin >> n;
	cout << "Please enter your sequence:" << endl;
	count = 1;
	x = 1;
	while (count <= n)
	{
		cin >> num;
		x = x * num;
		count++;
	}
	m = 1 / n;
	output = pow(x, m);
	cout << "The geometric mean is:" << output << endl;



	cout << "section b" << endl;
	cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing - 1:" << endl;
	bool minus_1;
	minus_1 = false;
	x = 1;
	count = 0;
	while (minus_1 == false) {
		cin >> num;
		if (num == -1) {
			minus_1 = true;
		}
		else {
			x = x * num;
			count++;
		}
	}
	m = 1 / count;
	output = pow(x, m);
	cout << "The geometric mean is:" << output;

	return 0;
}