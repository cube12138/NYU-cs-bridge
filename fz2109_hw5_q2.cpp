#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int x1,user_input;
	int front_num, behind_num, left_time;

	srand(time(0));
	x1 = (rand() % 100) + 1;

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
	left_time = 5;
	user_input = 1000;
	front_num = 1;
	behind_num = 100;
	while (left_time > 0 && user_input != x1)
	{		
		cout << "range:[" << front_num << "," << behind_num << "], Number of guesses left: " << left_time << endl;
		cout << "Your guess: ";
		cin >> user_input;
		if (left_time>1)
		{	
			//1-front
			if (user_input < front_num && user_input >= 1)
			{
			cout << "Wrong! My number is bigger." << endl;
			cout << " " << endl;

			}

			//fount-x1
			else if (user_input < x1 && user_input >= front_num)
			{
				front_num = user_input + 1;
				cout << "Wrong! My number is bigger." << endl;
				cout << " " << endl;
		
			}

			//x1
			else if (user_input == x1)
			{
				cout << "Congrats! You guessed my number in " << 5 - left_time + 1 << " guesses." << endl;
				cout << " " << endl;
		
			}

			//x1-behind
			else if (user_input > x1 && user_input <= behind_num)
			{
			behind_num = user_input - 1;
			cout << "Wrong! My number is smaller." << endl;
			cout << " " << endl;
		
			}

			//behind-100
			else if (user_input > behind_num && user_input <= 100)
			{
			cout << "Wrong! My number is smaller." << endl;
			cout << " " << endl;
		
			}

		}
		else
		{
			if (user_input==x1)
			{
				cout << "Congrats! You guessed my number in " << 5 - left_time + 1 << " guesses." << endl;
				cout << " " << endl;
		
			}
			else
			{
				cout << "Out of guesses! My number is " << x1 << endl;
				cout << " " << endl;
				
			}
		}
		left_time -= 1;
	}


return 0;
}