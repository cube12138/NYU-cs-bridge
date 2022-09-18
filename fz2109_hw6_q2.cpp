#include <iostream>
using namespace std;
void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);
int main()
{
	int N;
	char symbol;
	cout << "Enter the number and your symbol:" << endl;
	cin >> N >> symbol;
	cout << "Tree is coming!" << endl;
	printPineTree(N, symbol);

	return 0;
}
void printShiftedTriangle(int n, int m, char symbol) {
	int linenumber;
	int front_space, behind_space, char_count;
	for (linenumber = 1; linenumber <= n; linenumber++)
	{
		for (front_space = 1; front_space <= m + n - linenumber; front_space++)
		{
			cout << " ";
		}
		for (char_count = 1; char_count <= 2 * linenumber - 1; char_count++)
		{
			cout << symbol;
		}
		for (behind_space = 1; behind_space <= n - linenumber; behind_space++)
		{
			cout << " ";
		}
		cout << endl;
	}
}
void printPineTree(int n, char symbol) {
	int a, m;
	for (a = 2, m = n - 1; a <= (n + 1), m >= 0; a++, m--)
	{
		printShiftedTriangle(a, m, symbol);
	}
}