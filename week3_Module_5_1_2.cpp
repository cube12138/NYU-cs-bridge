// if syntactic 
//Determining the Parity(��ż����)
#include <iostream>
using namespace std;

int main()
{   
	int userInput;

	cout << "enter an integer:" << endl;
	cin >> userInput;

	if (userInput % 2 == 0)
	{
		cout << "the number is even" << endl;
	}
	else
	{
		cout << "the number is odd" << endl;
	}
	return 0;

}