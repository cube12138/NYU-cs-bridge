//Module 4.2 (week 2)
//use double type;
//For use pi constant, include cmath
#include <iostream>
//cmath好像不行 要自己定义一下
#include <cmath>

using namespace std;

int main2() {
	double radius, area;
	double M_PI = 3.1415926;
	cout << "please enter the radius of the circle:" << endl;
	cin >> radius;
	// question: why no endl; after cin
	area = M_PI * (radius * radius);
	cout << "the area of the circle is " << area << endl;

	return 0;
}