#include <iostream>
#include <string>
using namespace std;
void output(string str1, string str2);
string all_lower_letter(string str);

int main() {
    string userEnter1, userEnter2;
    cout << "Please enter your first string: " << endl;
    getline(cin, userEnter1);
    cout << "Please enter your second string: " << endl;
    getline(cin, userEnter2);
    output(userEnter1, userEnter2);
    return 0;
}

void output(string str1, string str2) {
    string all_lower_letter1 = all_lower_letter(str1);
    string all_lower_letter2 = all_lower_letter(str2);
    string order_letter1, order_letter2;
    for (char x = 'a'; x <= 'z'; x++)
    {
        for (int i = 0; i < all_lower_letter1.length(); i++)
        {
            if (x == all_lower_letter1[i])
            {
                order_letter1 += x;
            }
        }
    }

    for (char m = 'a'; m <= 'z'; m++)
    {
        for (int n = 0; n < all_lower_letter2.length(); n++)
        {
            if (m == all_lower_letter2[n]) {
                order_letter2 += m;
            }
        }
    }
    if (order_letter1 == order_letter2)
    {
        cout << "These two strings are anagrams" << endl;
    }
    else
    {
        cout << "These two strings are not anagrams" << endl;
    }

}

string all_lower_letter(string str) {

    string all_letter;

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            all_letter += str[i];
        }
    }

    for (int m = 0; m < all_letter.length(); m++)//change to lower case
    {
        if (all_letter[m] >= 'A' && all_letter[m] <= 'Z')
        {
            all_letter[m] = (char)(all_letter[m] + 32);
        }
    }
    return all_letter;
}