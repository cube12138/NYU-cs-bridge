#include <iostream>
using namespace std;
int minInArray(int arr[], int arrSize);

int main()
{
	const int maximum_size = 20;
	cout << "Please enter " << maximum_size << " integers separated by a space: " << endl;
	int arr[maximum_size];
	for (int i = 0; i < maximum_size; i++)
	{
		cin >> arr[i];
	}
	cout << "The minimum value is " << minInArray(arr, maximum_size) << ", and it is located in the following indices: ";

	for (int i = 0; i < maximum_size; i++)
	{
		if (arr[i] == minInArray(arr, maximum_size))
		{
			cout << i << " ";
		}
	}
	return 0;
}

int minInArray(int arr[], int arrSize) {
	int min = arr[0];
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
