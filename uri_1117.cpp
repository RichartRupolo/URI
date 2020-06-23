#include <iostream>
  
using namespace std;
  
int main() {

int cont=0;
float c,media=0;

do{
	cin >> c ;
	if((c<0) || (c>10)){
		
		cout << "nota invalida" << endl;
		
		}
		if(c>=0 && c<11){
			 
			 media=media+c;
			 cont++;
			
			}
	
	}while(cont<=1);
	
	cout << "media = " << media/2 << endl;
	
}
