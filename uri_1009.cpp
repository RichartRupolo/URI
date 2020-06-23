#include <iostream>

using namespace std;

int main()
{
	string NOME ;
	double SALARY ;
	double VENDAS ;
	double TOTAL;
	
	
	cin >> NOME ;
	cin >> SALARY ;
	cin >> VENDAS ;
	
	
	TOTAL = SALARY + (VENDAS*0.15);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "TOTAL = R$ " << TOTAL << endl;
	return 0;
}
