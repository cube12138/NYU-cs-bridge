#include <iostream> //A hard question
#include<string>
using namespace std;
void allnumber(string str);
int main()
{
	string userEnter;
	cout << "Please enter a line of text:" << endl;
	getline(cin, userEnter);
	int i = userEnter.length();
	int position = 0;
	while (i > 0)
	{
		if (userEnter.find(" ", position) == string::npos)
		{
			string check = userEnter.substr(position, i);
			allnumber(check);
			i = 0;
		}
		else
		{
			int space = userEnter.find(" ", position);
			string check = userEnter.substr(position, space - position);
			allnumber(check);
			i -= (space - position + 1);
			position = space + 1;
		}

	}
	return 0;
}

void allnumber(string str) {
	int len = str.length();
	bool allnumber = true;
	for (int i = 0; i < len; i++)
	{
		if (str[i] - '0' < 0 || str[i] - '0' > 9)
		{
			allnumber = false;
		}
	}
	if (allnumber)
	{
		for (int i = 0; i < str.length(); i++)
		{
			str[i] = 'x';
		}
		cout << str << " ";
	}
	else
	{
		cout << str << " ";
	}
}