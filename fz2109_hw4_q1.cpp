#include <iostream>
using namespace std;

int main()
{
	cout << "section a" << endl;
	int n, m;
	cout << "Please enter a positive integer:";
	cin >> n;
	m = 0;

	while (m < 2 * n)
	{
		m += 2;
		cout << m << endl;
	}



	cout << "section b" << endl;
	int a, b;
	cout << "Please enter a positive integer:";
	cin >> a;
	b = 2;

	for (b = 2; b <= 2 * a; b += 2)   //some question
	{
		cout << b << endl;
	}

	return 0;
}