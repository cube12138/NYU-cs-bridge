#include <iostream>
#include<vector>

using namespace std;
int main1();
int main2();
int* read_number_by_array(int& size);
vector<int>read_number_by_vector();

int main() {
    main1();
    main2();
    return 0;
}

int main1() {
    int size;
    int* ouput = read_number_by_array(size);
    for (int i = 0; i < size; i++)
    {
        cout << ouput[i] << " ";
    }
    cout << endl;
    return 0;
}
int* read_number_by_array(int& size) {
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1." << endl;
    int* Array;
    int textArrSize, textArrPhysicalSize;
    bool negtive_one;
    int number;
    Array = new int[1];
    textArrSize = 0;
    textArrPhysicalSize = 1;

    negtive_one = false;
    while (negtive_one == false) {
        cin >> number;
        if (number == -1)
            negtive_one = true;
        else {
            if (textArrSize == textArrPhysicalSize) {
                int* newTextArr;
                newTextArr = new int[2 * textArrPhysicalSize];
                for (int i = 0; i < textArrSize; i += 1)
                    newTextArr[i] = Array[i];
                delete[]Array;
                Array = newTextArr;
                textArrPhysicalSize *= 2;
            }
            Array[textArrSize] = number;
            textArrSize += 1;
        }
    }
    int search_number;
    cout << "Please enter a number you want to search." << endl;
    cin >> search_number;
    int search_array_number = 0;
    int j = 0;
    for (int i = 0; i < textArrSize; i++)
    {
        if (search_number == Array[i])
            search_array_number++;
    }
    int* search_array = new int[search_array_number];
    for (int i = 0; i < textArrSize; i++)
    {
        if (search_number == Array[i])
        {
            search_array[j] = i + 1;
            j++;
        }
    }
    cout << search_number << " shows in lines ";

    size = search_array_number;
    return search_array;
}


int main2() {
    vector<int> searchVectorLine = read_number_by_vector();
    for (int i = 0; i < searchVectorLine.size(); i++)
    {
        cout << searchVectorLine[i] << " ";
    }
    cout << endl;

    return 0;
}
vector<int>read_number_by_vector() {
    vector<int> arrayVector;
    bool negtive_one;
    int number;
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1." << endl;
    negtive_one = false;
    while (negtive_one == false) {
        cin >> number;
        if (number == -1)
            negtive_one = true;
        else
            arrayVector.push_back(number);
    }
    int search_number;
    cout << "Please enter a number you want to search." << endl;
    cin >> search_number;
    cout << search_number << " shows in lines ";
    vector<int> searchVectorLine;
    for (int i = 0; i < arrayVector.size(); i++) {
        if (arrayVector[i] == search_number) {
            searchVectorLine.push_back(i + 1);
        }
    }
    return searchVectorLine;
}