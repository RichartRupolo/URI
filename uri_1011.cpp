#include <iostream>
#include <math.h>

#define  PI 3.14159 ;

using namespace std;

int main()
{
	double RAIO ;
	double VOLUME ;
	cin >> RAIO ;
	VOLUME = (pow(RAIO,3))*(4.0/3)*PI;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout << "VOLUME = " << VOLUME << endl;
	return 0;
}
