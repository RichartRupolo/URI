/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b).
 Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
 
    double a, b, c, maiorAB, maior;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
 
    maiorAB = (a + b +  abs(a - b)) / 2;
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;
   
    cout << maior <<" eh o maior" << endl;
   
    return 0;
}
