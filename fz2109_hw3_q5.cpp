#include <iostream>
#include <string>
using namespace std;

int main()
{
	double weight_kg, height_meter, weight_pound, height_inches, BMI;
	string status;

	cout << "Please enter weight (in pounds):";
	cin >> weight_pound;
	cout << "Please enter height(in inches):";
	cin >> height_inches;
	weight_kg = 0.453592 * weight_pound;
	height_meter = 0.0254 * height_inches;
	BMI = weight_kg / pow(height_meter, 2);

	if (BMI < 18.5)
	{
		status = "Underweight";
		cout << "The weight status is: " << status << endl;
	}
	else if (BMI >= 18.5 && BMI < 25)
	{
		status = "Normal";
		cout << "The weight status is: " << status << endl;
	}
	else if (BMI >= 25 && BMI < 30)
	{
		status = "Overweight";
		cout << "The weight status is: " << status << endl;
	}
	else
	{
		status = "Obese";
		cout << "The weight status is: " << status << endl;
	}
	return 0;
}