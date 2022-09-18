//班级中学生的平均成绩 用到了for循环
#include <iostream>
using namespace std;

int main()
{
	int num_students;
	int count;
	int sum, curr;
	double average;

	cout << "enter student number :";
	cin >> num_students;

	cout << "enter student grade separated by space";
	count = 1;
	sum = 0;//记得初始化
	for (count = 1; count <= num_students; count++)//为何能以此取数呢 而不是一直取第一个数字？
	{
		cin >> curr;
		sum += curr;
	}

	average = (double)sum / (double)num_students;//强制转换成double
	cout << "the average number is:" << average << endl;
	return 0;
}