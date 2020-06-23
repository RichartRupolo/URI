/*
aça um programa que leia o nome de um vendedor,
 o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
  Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, 
  informar o total a receber no final do mês, com duas casas decimais.

Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais,
 representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
*/
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
