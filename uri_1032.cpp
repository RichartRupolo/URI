/*
O problema de Josephus é notoriamente conhecido. Para aqueles que não estão familiarizados com o problema,
 entre n pessoas numeradas 1,2 ... n, de pé em círculo cada um deve ser executado e só a vida do último que sobrar será preservada.
  Josephus foi esperto o suficiente para escolher a posição da última pessoa restante, poupando a sua vida.

Apesar de muitos bons programadores poderem se salvar desde que Josephus espalhou essa informação
 (o lugar onde ficar para não ser executado), o primo de Josephus introduziu uma nova variante do jogo maligno.
  Este personagem insano é conhecido por suas idéias bárbaras e desejos para limpar o mundo de programadores.
   Tivemos de infiltrar alguns agentes os da ACM, a fim de conhecer o processo neste novo jogo mortal.

A fim de salvar-se de esta prática mal, você deve desenvolver uma ferramenta capaz de prever qual será a pessoa salva.

O processo destrutivo

As pessoas são eliminados em uma ordem muito peculiar: m é uma variável dinâmica,
 que cada vez tem um valor diferente correspondente a sucessão dos números primos de (2,3,5,7 ...).
  Então, para matar a pessoa i, o primo de Josephus conta até o próximo m primo.

Entrada
Consiste em linhas separadas, contendo n [1 .. 3501], e termina com um 0.

Saída
A saída consistirá em linhas separadas relativos à posição da pessoa que a vida será salva.
*/
#include <iostream>
#include <cmath>
#include <cstring>
int prime[3502];
using namespace std;

int flavious(int n) {
    int r = 0;
    for (int i = 1; i <= n; i++){
        r = (r + prime[n-i]) % i;
    }
    return r;
}

int isPrime(int n) { 
    int i;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i*i<=n; i+=2) {
        if(n%i == 0) return 0;
    }
    return 1;
}

void primeNumbers(){
     memset(&prime, 0, sizeof(prime));
     int j;
     int a = 0;
     for(j = 2; j < 32650; j++){
           if(isPrime(j)){
                          prime[a] = j;
                          a++;
           }
     }
}

int main(){
    int x;
    
    primeNumbers();

    while(1){
            cin >> x;
            if(x == 0) break;
            cout << flavious(x)+1<<endl;
    }
    return 0;
}
