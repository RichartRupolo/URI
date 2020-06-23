#include <iostream>

using namespace std;

int main()
{
	double A,B,MEDIA,C;
	cin >>A;
	cin >>B;
	cin >>C;
	MEDIA = ((A*2)+(B*3)+(C*5))/10;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}