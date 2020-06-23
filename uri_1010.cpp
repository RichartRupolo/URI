/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2,
 o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, 
respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, 
lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/
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
