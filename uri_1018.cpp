/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido.
Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/
#include <iostream>

using namespace std;

int main(){
    int inteiro, aux;
    
    cin >> inteiro;
    
    cout << inteiro <<"\n";
    cout << inteiro/100 << " nota(s) de R$ 100,00"<< endl;
    aux = (inteiro%100);
    cout << aux/50 << " nota(s) de R$ 50,00" << endl;
    aux = (aux%50);
    cout << aux/20 << " nota(s) de R$ 20,00"<< endl;
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10,00"<< endl;
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5,00"<< endl;
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2,00"<< endl;
    aux = (aux%2);
    cout << aux/1 << " nota(s) de R$ 1,00"<< endl;
    return 0;
}
