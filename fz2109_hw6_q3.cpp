#include <iostream>
using namespace std;

double eApprox(int n);

int main() {
	cout.precision(30);
	for (int n = 1; n <= 15; n++) {
		cout << "n = " << n << '\t' << eApprox(n) << endl;
	}
	return 0;
}


double eApprox(int n) {
	int count;
	double product = 1;
	double e = 1;
	for (count = 1; count <= n; count++)
	{
		product *= count;
		e += (1 / product);
	}
	return e;
}
