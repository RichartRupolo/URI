#include <iostream>


using namespace std;

int main()
{
	double X;
	double Y;
    cin >> X ;
    cin >> Y ;
    	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
    cout << X/Y << " km/l" << endl;
	
	return 0;
}

