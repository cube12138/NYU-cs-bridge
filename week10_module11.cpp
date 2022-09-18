#include <iostream>//resize array
using namespace std;
void resizeArray(int*& arr, int currentsize, int newsize) {
	int* temp = new int[newsize];
	for (int i = 0; i < currentsize; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	arr = temp;
}
int main()
{
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 10 * i;
	}
	int onemore = 110;
	int newsize = size * 2;
	resizeArray(arr, size, newsize);
	size = newsize;
	arr[size++] = onemore; //什么意思 问一下yuhao
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}