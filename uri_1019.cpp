/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    while(cin >> x) {
        cout << x/60/60 << ":" << x/60%60 << ":" << x%60 << endl;
    }
}
