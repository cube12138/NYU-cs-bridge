#include <iostream>
#include<cmath>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main() {
	int sum;
	const int arrSize = 4;
	int arr[] = { 2,-1,3,10 };
	sum = sumOfSquares(arr, arrSize);
	cout << sum << endl;
	cout << "enter the array size of what you want to test for ascending order(an integer larger or equal than 2):";
	int size;
	cin >> size;
	while (size <= 1)
	{
		cout << "your size is not right, please enter an integer larger or equal than 2: ";
		cin >> size;
	}
	cout << "please enter your array seperate by a space or one line one number:" << endl;
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	bool isAscending = isSorted(array, size);
	if (isAscending)
	{
		cout << "your array is in an ascending order";
	}
	else
	{
		cout << "your array is not in an ascending order";
	}
	delete[]array;
	array = NULL;
	return 0;
}
int sumOfSquares(int arr[], int arrSize) {
	int sum;
	if (arrSize == 1)
	{
		sum = pow(arr[0], 2);
		return sum;
	}
	if (arrSize > 1)
	{
		sum = sumOfSquares(arr, arrSize - 1);
		sum += pow(arr[arrSize - 1], 2);
		return sum;
	}
}
bool isSorted(int arr[], int arrSize) {
	if (arrSize == 1)
		return true;
	if (arrSize == 2) {
		if (arr[0] <= arr[1])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (arrSize > 2)
	{
		if ((arr[arrSize - 1] >= arr[arrSize - 2]) && (isSorted(arr, arrSize - 1)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}