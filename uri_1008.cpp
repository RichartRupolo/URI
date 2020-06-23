#include <iostream>

using namespace std;

int main()
{
	double NUMBER ;
	double SALARY ;
	double HOURS ;
	
	
	cin >> NUMBER ;
	cin >> SALARY ;
	cin >> HOURS ;
	
	
	SALARY = SALARY*HOURS;
	cout << "NUMBER = "<< NUMBER << endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "SALARY = U$ " << SALARY << endl;
	return 0;
}
