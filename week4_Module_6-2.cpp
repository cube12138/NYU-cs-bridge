//�༶��ѧ����ƽ���ɼ� �õ���forѭ��
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
	sum = 0;//�ǵó�ʼ��
	for (count = 1; count <= num_students; count++)//Ϊ�����Դ�ȡ���� ������һֱȡ��һ�����֣�
	{
		cin >> curr;
		sum += curr;
	}

	average = (double)sum / (double)num_students;//ǿ��ת����double
	cout << "the average number is:" << average << endl;
	return 0;
}