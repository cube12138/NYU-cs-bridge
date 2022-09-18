#include <iostream>
#include<string>
using namespace std;
bool isPalindrome(string str);

int main()
{
	string userinput;
	cout << "Please enter a word:";
	getline(cin, userinput);

	if (isPalindrome(userinput))
	{
		cout << userinput << " is a palindrome"<<endl;
	}
	else
	{
		cout << userinput << " is not a palindrome"<<endl;
	}
	return 0;
}

bool isPalindrome(string str) {
	string inverse = str;   //this is so important, otherwise the string will out of range
	int len = str.length() - 1;
	for (int i = 0; i <= len; i++)
	{
		inverse[i] = str[len - i];
	}
	if (inverse == str)
	{
		return true;
	}
	else
	{
		return false;
	}
}
