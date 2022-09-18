//Fangtong Zhao(fz2109)
#include <iostream>
using namespace std;
//int palindromeDistance(int* arr, int n);
//int main()
//{
//	int arr[6] = { 1, 3, 6, 3, 5, 2 };
//	int number = palindromeDistance(arr, 6);
//	cout << number;
//	return 0;
//}
int palindromeDistance(int* arr, int n) {
	int pair_number;
	if (n == 1)
	{
		pair_number = 0;
	}
	else if (n == 2)
	{
		if (arr[n - 2] != arr[n - 1])
		{
			pair_number = 1;
		}
		else
		{
			pair_number = 0;
		}
	}
	else
	{
		pair_number = palindromeDistance(arr + 1, n - 2);
		if (arr[0] != arr[n - 1])
		{
			pair_number += 1;
		}
	}
	return pair_number;
}