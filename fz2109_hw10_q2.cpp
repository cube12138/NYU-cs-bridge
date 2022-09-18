#include <iostream>
using namespace std;
int* findMissing(int arr[], int n, int& resArrSize);

int main() {
    int arr[6] = { 3, 1, 3, 0, 6, 4 };
    int resArrSize;
    int* missingArray = findMissing(arr, 6, resArrSize);
    for (int i = 0; i < resArrSize; i++)
    {
        cout << missingArray[i] << " ";
    }
    return 0;
}

int* findMissing(int arr[], int n, int& resArrSize) {
    int* missingArray = arr;
    int m = 0;
    for (int count = 0; count <= n; count++)
    {
        bool have_number = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == count)
            {
                have_number = true;
            }
        }
        if (have_number == false)
        {
            missingArray[m] = count;
            m++;
        }
    }
    resArrSize = m;
    return missingArray;
}