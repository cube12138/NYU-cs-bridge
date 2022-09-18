#include <iostream>
#include <string>
using namespace std;
void output(string str);

int main() {
    string userEnter;
    cout << "Please enter a line of text: " << endl;
    getline(cin, userEnter);
    output(userEnter);
    return 0;
}

void output(string str) {
    char separate_space = ' ';
    char separate_comma = ',';
    char separate_period = '.';
    string all_letter;
    bool isPreciousWords = false;
    int number_of_words = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == separate_space || str[i] == separate_comma || str[i] == separate_period)
        {
            if (isPreciousWords)
            {
                number_of_words++;
            }

            isPreciousWords = false;
        }
        else if ((i == str.length() - 1) && (str[i] != separate_space || str[i] != separate_comma || str[i] != separate_period))
        {
            number_of_words++;
            all_letter += str[i];
        }
        else
        {
            all_letter += str[i];
            isPreciousWords = true;
        }

    }
    cout << number_of_words << "\t" << "words" << endl;

    for (int m = 0; m < all_letter.length(); m++)//change to lower case
    {
        if (all_letter[m] >= 'A' && all_letter[m] <= 'Z')
        {
            all_letter[m] = (char)(all_letter[m] + 32);
        }
    }
    for (char x = 'a'; x <= 'z'; x++)
    {
        int letter_numbers = 0;
        for (int n = 0; n < all_letter.length(); n++)
        {
            if (all_letter[n] == x)
            {
                letter_numbers++;
            }
        }
        if (letter_numbers != 0)
        {
            cout << letter_numbers << "\t" << x << endl;
        }

    }
}
