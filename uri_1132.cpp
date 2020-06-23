#include <iostream>
  
using namespace std;
  
int main() {
  
  int x,y,aux,aux2;
  cin >> x;
  cin >> y;
  aux = x;
  aux2 = y;
  int resultado = 0;
  while(x <= y){
    if(x%13 != 0){
        resultado += x;
      }
      x++;
  }  
  while(y <= aux){
    if(y%13 != 0){
        resultado += y;
      }
      y++;
  }
  
  cout << resultado <<endl;
  
  return 0;
}

