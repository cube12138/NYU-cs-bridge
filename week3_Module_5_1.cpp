// if syntactic ����������Ҫ���׶� ע��д��
//ת���ɾ���ֵ
#include <iostream>
using namespace std;

int main()
{
	int userInput, absValue;
	cout << "enter an integer:" << endl;
	cin >> userInput;

	absValue = userInput;

	if (userInput < 0)
		absValue = (-1) * userInput;
	cout << "the absolute value is " << absValue << endl;

	return 0;
}


