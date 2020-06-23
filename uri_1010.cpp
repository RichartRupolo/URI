#include <iostream>

using namespace std;

int main()
{
	int COD ;
	int QNT ;
	double VALOR = 0 ;
	double VAL;
	
	for(int i = 0; i < 2 ; i++)
	{
		cin >> COD ;
		cin >> QNT ;
		cin >> VAL;
		VALOR = VAL * QNT + VALOR;
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << VALOR << endl;
	return 0;
}
