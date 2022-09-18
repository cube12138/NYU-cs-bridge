//week4, week5 are all loop
//this one is to print a triangle abcd
//char to int transfer and calculation
#include <iostream>
using namespace std;

int main()
{
	char inputletter;
	char currletter, lastletterinline;
	int n;
	int linecount, spacecount;

	cout << "Enter lower case number" << endl;
	cin >> inputletter;

	cout << "line of letters" << endl;
	for (currletter = 'a'; currletter <= inputletter; currletter += 1)
	{
		cout << currletter;
	}
	cout << endl;
	cout << endl << "triangle of letters" << endl;
	n = (inputletter - 'a') + 1;

	for (linecount = 1, lastletterinline = 'a'; linecount <= n; linecount += 1, lastletterinline += 1)
	{	//print space, 
		for (spacecount = 0; spacecount <= (n - linecount); spacecount += 1) {
			cout << " ";
		}
		//ptint letters up to..
		for (currletter = 'a'; currletter <= lastletterinline; currletter += 1) {
			cout << currletter;
		}
		//break the line;
		cout << endl;
	}

	return 0;
}