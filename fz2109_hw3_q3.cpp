#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, x1, x2;
	double sqrtResult;
	string status;


	cout << "Please enter value of a: ";
	cin >> a;
	cout << "Please enter value of b: " ;
	cin >> b;
	cout << "Please enter value of c: " ;
	cin >> c;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	if (a == 0 && b == 0 && c == 0)
	{
		status = "This equation has infinite number of solutions";
		cout << status << endl;
	}
	else if (a == 0 && b == 0 && c != 0)
	{
		status = "This equation has no solution";
		cout << status << endl;
	}
	else if (a == 0 && b != 0 && c != 0)
	{
		status = "This equation has a single real solution";
		x1 = (-c) / b;
		cout << status << " x=" << x1 << endl;
	}
	else
	{
		if (pow(b, 2) - 4 * a * c > 0)
		{
			status = "This equation has two real solutions";
			x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
			x2 = (-b + sqrt(pow(b, 2) + 4 * a * c)) / (2 * a);
			cout << status << "x1=" << x1 << ", x2=" << x2 << endl;
		}
		else if (pow(b, 2) - 4 * a * c == 0)
		{
			status = "This equation has a single real solution";
			x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
			cout << status << " x=" << x1 << endl;
		}
		else
		{
			status = "This equation has a no real solution";
			cout << status << endl;
		}
	}
	return 0;
}