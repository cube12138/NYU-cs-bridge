#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;
int main()
{

	int user_method, a, b, c;
	double user_enter, different_upper, different_lower;


	cout << "Please enter a Real number:" << endl;
	cin >> user_enter;
	cout << "Choose your rounding method:" << endl;
	cout << "1. Floor round" << endl;
	cout << "2. Ceiling round " << endl;
	cout << "3. Round to the nearest whole number" << endl;
	cin >> user_method;

	a = user_enter / 1;
	b = user_enter / 1 + 1;
	different_lower = user_enter - a;
	different_upper = b - user_enter;



	switch (user_method)
	{
	case FLOOR_ROUND:
		if (user_enter > 0) {
			cout << a << endl;
		}
		else if (user_enter < 0) {
			cout << a - 1 << endl;
		}
		else {
			cout << user_enter;
		}
		break;

	case CEILING_ROUND:
		if (user_enter > 0) {
			cout << b << endl;
		}
		else if (user_enter < 0) {
			cout << a << endl;
		}
		else {
			cout << user_enter;
		}
		break;

	case ROUND:
		if (user_enter > 0) {
			if (different_lower < different_upper)
				cout << a << endl;
			else
				cout << b << endl;
		}
		else if (user_enter < 0) {
			if ((a - user_enter) < (user_enter - (a - 1))) {
				cout << a << endl;
			}
			else if ((user_enter - (a - 1)) < (a - user_enter)) {
				cout << a - 1 << endl;
			}
			else {
				cout << user_enter;
			}
			break;

		}
	}
	return 0;
}