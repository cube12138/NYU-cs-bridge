#include <iostream>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);


int main()
{
    int arr[6] = { 3, -1, -3, 0, 6, 4 };
    //first way
    int n1;
    int* getPosNums_1 = getPosNums1(arr, 6, n1);
    for (int i = 0; i < n1; i++)
    {
        cout << getPosNums_1[i] << " ";
    }
    cout << endl;

    //second way
    int* n2 = new int;
    int* getPosNums_2 = getPosNums2(arr, 6, n2);
    for (int i = 0; i < *n2; i++)
    {
        cout << getPosNums_2[i] << " ";
    }
    cout << endl;

    //third way
    int n3;
    int* outPosArr3 = new int[6];
    getPosNums3(arr, 6, outPosArr3, n3);
    for (int i = 0; i < n3; i++)
    {
        cout << outPosArr3[i] << " ";
    }
    cout << endl;
    delete[] outPosArr3;
    outPosArr3 = NULL;

    //fourth way
    int* n4 = new int;
    int** outPosArr4 = new int* [6];
    getPosNums4(arr, 6, outPosArr4, n4);
    for (int i = 0; i < *n4; i++)
    {
        cout << outPosArr4[0][i] << " "; //important! unless it will be address
    }
    cout << endl;
    delete n4;
    n4 = NULL;
    delete[] outPosArr4;
    outPosArr4 = NULL;
    return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
    int positiveNumber = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0)
        {
            positiveNumber += 1;
        }
    }
    int* temp = new int[positiveNumber];
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            temp[j] = arr[i];
            j += 1;
        }
    }
    outPosArrSize = positiveNumber;
    return temp;

}
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    int positiveNumber = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0)
        {
            positiveNumber += 1;
        }
    }
    int* temp = new int[positiveNumber];
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            temp[j] = arr[i];
            j += 1;
        }
    }
    *outPosArrSizePtr = positiveNumber;
    return temp;

}
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    int positiveNumber = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0)
        {
            positiveNumber += 1;
        }
    }
    int* temp = new int[positiveNumber];
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            temp[j] = arr[i];
            j += 1;
        }
    }
    outPosArrSize = positiveNumber;
    outPosArr = temp;
}
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
    int positiveNumber = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0)
        {
            positiveNumber += 1;
        }
    }
    int* temp = new int[positiveNumber];
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            temp[j] = arr[i];
            j += 1;
        }
    }
    *outPosArrSizePtr = positiveNumber;
    *outPosArrPtr = temp;

}
