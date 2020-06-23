#include <iostream>
#include <math.h>
#define PI 3.14159;

using namespace std;
int main()
{
	cout.setf(ios::left, ios::floatfield);
 
	double A;
	double area;
	cin >> area;
	cout.precision(4);
	cout.setf(ios::fixed,ios::floatfield);
	A= pow (area,2) * PI;

	cout << "A="  << A << endl;
	return 0;
}
 