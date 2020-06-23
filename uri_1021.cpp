/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário.
 A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto.
  As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
   A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double note(double x, string type, double note) {
    int n = 0;
    while(x >= note) {
        n+=1;
        x-=note;
    }
    cout << n << " " << type << "(s) de R$ " << fixed << setprecision(2) <<note << endl;
    return x;
}

int main() {
    double x;
    while(cin >> x) {
        cout << "NOTAS:" << endl;
        x = note(x, "nota", 100);
        x = note(x, "nota", 50);
        x = note(x, "nota", 20);
        x = note(x, "nota", 10);
        x = note(x, "nota", 5);
        x = note(x, "nota", 2);

        cout << "MOEDAS:" << endl;
        x = note(x, "moeda", 1);
        x = note(x, "moeda", 0.50);
        x = note(x, "moeda", 0.25);
        x = note(x, "moeda", 0.10);
        x = note(x, "moeda", 0.05);
        x = note(x, "moeda", 0.01);
        
    }
}
