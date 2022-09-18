#include <iostream>
using namespace std;

int main()
{
	int linecount, n;
	int num, count;

	cout << "Please enter a positive integer:" << endl;
	cin >> n;
	for (linecount = 1; linecount <= n; linecount += 1) {
		for (num = linecount; num <= linecount * n; num = num + linecount)
		{
			cout << num ;
			if (num / 10 == 0)
			{
				cout << "  ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
