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
