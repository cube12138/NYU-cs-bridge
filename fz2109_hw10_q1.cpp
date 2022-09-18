#include <iostream>
#include <string>
using namespace std;
string* createWordsArray(string sentence, int& outWordsArrSize);

int main() {
    int outWordsArrSize;
    cout << "Please enter a sentence: " << endl;
    string sentence;
    getline(cin, sentence);
    string* output = createWordsArray(sentence, outWordsArrSize);
    cout << "the sentence have " << outWordsArrSize << " words:" << endl;
    for (int i = 0; i < outWordsArrSize; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize)
{
    string* newStrArray;
    int start_position = 0;
    int new_arr_size = 0;
    while (start_position < sentence.length())
    {
        if (sentence.find(" ", start_position) == string::npos)
        {
            start_position = sentence.length();
            new_arr_size++;
        }
        else
        {
            start_position = sentence.find(" ", start_position) + 1;
            new_arr_size++;   
        }
    }
    newStrArray = new string[new_arr_size];
    int find_start_position = 0;
    int space_position = 0;
    for (int i = 0; i < new_arr_size; i++)
    {
        space_position = sentence.find(" ", find_start_position);
        newStrArray[i] = sentence.substr(find_start_position, space_position - find_start_position);
        find_start_position = space_position + 1;
    }
    outWordsArrSize = new_arr_size;
    return newStrArray;
}

