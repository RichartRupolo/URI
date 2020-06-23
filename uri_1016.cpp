#include <iostream>

using namespace std;



int main()
{
	int CAR_Y =90;
	int CAR_X =60;
	double DIST ;
	double DIF ;
	double TEMPO ;
	cin >> DIST;
	DIF=(CAR_Y-CAR_X);
	
	DIF = DIF/3.6;

	TEMPO = (DIST*1000)/DIF;
	
	cout << TEMPO/60 << " minutos" << endl;
	
	return 0;
}
