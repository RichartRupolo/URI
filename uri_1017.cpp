#include <iostream>
#include <iomanip>
#define CONSUMO 12;

using namespace std;


int main()
{
	
	int TEMPO;
	double VELOCIDADE;
	double GASTO;
	cout << fixed << setprecision(3);
	cin >> TEMPO;
	cin >> VELOCIDADE;
	GASTO = TEMPO*VELOCIDADE/CONSUMO;
	cout << GASTO << endl;
	return 0;
}
 