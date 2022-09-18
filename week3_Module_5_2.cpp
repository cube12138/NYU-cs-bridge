// if syntactic 
//Classifying a character Implementation
//use ASCII table
//integer 0 and char "0" is two diffrenet thing
#include <iostream>
using namespace std;

int main()
{
	char userCH;
	cout << "enter a character:" << endl;
	cin >> userCH;
	if (userCH >= 'a' && userCH <= 'z')
		cout << userCH << " is a lower case letter" << endl;
	else if(userCH >= 'A' && userCH <= 'Z')
		cout << userCH << " is a upper case letter" << endl;
	else if (userCH >= '0' && userCH <= '9')//integer 0 and char "0" is two diffrenet thing so 一定要加单引号
		cout << userCH << " is a digit" << endl;
	else
		cout << userCH << " is not a alpha_numeric character" << endl;

	return 0;
}