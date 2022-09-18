#include <iostream>
int lowest_cost(int arr[], int arrSize);
using namespace std;
int main() {
	int arrSize;
	cout << "please enter the colume number: ";
	cin >> arrSize;
	int* arr = new int[arrSize];
	cout << "enter the colume number seperated by space(first number must be 0):" << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
	}
	int lowestCost = lowest_cost(arr, arrSize);
	cout << "your lowest cost is: " << lowestCost << endl;
	return 0;
}
int lowest_cost(int arr[], int n) {
	int sum = arr[0];
	int next_number;
	if (n == 1)
	{
		sum = arr[0];
	}
	else if (n == 2)
	{
		sum = arr[0] + arr[n - 1];
	}
	else if (n == 3 || n == 4)
	{
		if (arr[n - 2] <= arr[n - 3])
		{
			sum = lowest_cost(arr, n - 1) + arr[n - 1];
		}
		else
		{
			sum = lowest_cost(arr, n - 2) + arr[n - 1];
		}
	}
	else
	{
		if ((arr[n - 3] + arr[n - 5] <= arr[n - 2] + arr[n - 4]) || (arr[n - 3] + arr[n - 4] <= arr[n - 2] + arr[n - 4]))
		{
			sum = arr[n - 1] + lowest_cost(arr, n - 2);
		}
		else
		{
			sum = arr[n - 1] + lowest_cost(arr, n - 1);
		}
	}
	return sum;
}
