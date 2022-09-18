#include <iostream>
using namespace std;
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
int main()
{
	int outCountDivs, outSumDivs, M, count;
	cout << "Please enter a positive number greater or equal to 2: ";
	cin >> M;

	for (count = 2; count <= M; count++)
	{
		if (isPerfect(count))
		{
			cout << count << " is a perfect number." << endl;
		}
	}
	for (count = 2; count <= M; count++)
	{
		int a = 0, b = 0, outCountDivs_1 = 0, outCountDivs_2 = 0;
		analyzeDividors(count, outCountDivs_1, a);
		analyzeDividors(a, outCountDivs_1, b);
		if (count == b && a <= M && count < a)
		{
			cout << count << " and " << a << " is a pair of amicable numbers." << endl;
		}
	}

	return 0;
}
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
	double limit = sqrt(num);
	int count = 1;
	outCountDivs = 0;
	outSumDivs = 0;
	for (count = 1; count <= limit; count++)
	{
		if (num % count == 0)
		{
			outCountDivs++;
			outSumDivs += count;
			if (count > 1)
			{
				int k = num / count;
				outCountDivs++;
				outSumDivs += k;
			}
		}
	}
}
bool isPerfect(int num) {
	int outCountDivs, outSumDivs;
	analyzeDividors(num, outCountDivs, outSumDivs);
	if (num == outSumDivs)
	{
		return true;
	}
	else
	{
		return false;
	}

}
