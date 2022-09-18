#include <iostream>
using namespace std;
void oddsKeepEvensFlip(int arr[], int arrSize);

int main()
{
	int arr[6] = { 5,2,11,7,6,4 };
	oddsKeepEvensFlip(arr, 6);
	return 0;
}
void oddsKeepEvensFlip(int arr[], int arrSize) {
	int temp[6];
	int start = 0, end = arrSize - 1;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] % 2 == 1)
		{
			temp[start] = arr[i];
			start++;
		}
		else
		{
			temp[end] = arr[i];
			end--;
		}
	}
	for (int x = 0; x < 6; x++)
	{
		cout << temp[x] << " ";
	}
}
