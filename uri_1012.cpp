#include <iostream>
#include <math.h>

#define  PI 3.14159 ;

using namespace std;

int main()
{
	double A;
	double B;
	double C;	
	double AREA;
	
	cin >> A ;
	cin >> B ;
	cin >> C ;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	AREA = pow(C,2)*PI;
	
	cout << "TRIANGULO: " << (A*C)/2.0 << endl; 
	cout << "CIRCULO: "  << AREA << endl;
	cout << "TRAPEZIO: " << ((A+B)*C)/2.0 << endl;
	cout << "QUADRADO: " << pow (B,2) << endl;
	cout << "RETANGULO: " << A*B << endl;
	
	return 0;
}

