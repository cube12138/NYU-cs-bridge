#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main()
{
	srand(time(0));
	const string str = "12345";
	int password_1_bit = str[0] - '0';
	int password_2_bit = str[1] - '0';
	int password_3_bit = str[2] - '0';
	int password_4_bit = str[3] - '0';
	int password_5_bit = str[4] - '0';
	int m;
	int arrNum[10];
	char userEnterChar[5], userEnterNum[5];
	cout << "Please enter your PIN according to the following mapping:" << endl;
	cout << "PIN: 0 1 2 3 4 5 6 7 8 9 " << endl;
	cout << "NUM: ";
	for (int i = 0; i < 10; i++)
	{
		m = (rand() % (3 - 1 + 1)) + 1;   //m=rand()%(Y-X+1)+X
		arrNum[i] = m;
		cout << arrNum[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < 5; j++)
	{
		cin >> userEnterChar[j];
		userEnterNum[j] = userEnterChar[j] - '0';//char to integer, the ascii value of'0' is 48
	}
	if (userEnterNum[0] == arrNum[password_1_bit] && userEnterNum[1] == arrNum[password_2_bit] && userEnterNum[2] == arrNum[password_3_bit] && userEnterNum[3] == arrNum[password_4_bit] && userEnterNum[4] == arrNum[password_5_bit])
	{
		cout << "Your PIN is correct" << endl;
	}
	else
	{
		cout << "Your PIN is not correct" << endl;
	}

	return 0;
}
