#include <iostream>
#include<string>
using namespace std;

int main()
{
	cout << "please enter your entire name in the following format :first name, then middle name or initial, and then last name." << endl;
	string last_name, first_name, middle_name;
	cin >> first_name >> middle_name >> last_name;
	cout << last_name << ", " << first_name << " " << middle_name[0] << ".";
	return 0;
}
