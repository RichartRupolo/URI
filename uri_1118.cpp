#include <iostream>
#include <iomanip>
  
using namespace std;
  
int main() {

int cont=0,opc=0;
float c,media=0;

do{
	
	 cin>>c;
	if((c<0) || (c>10)){
		
		cout << "nota invalida" << endl;
		
		}
		if(c>=1 && c<11){
			 
			 media=media+c;
			 cont++;
			 if(cont==2){
				 cout << fixed << setprecision(2);
				 cout << "media = " << media/2 << endl;
				 cont=0;
				 media=0;
				 do{
				 cout << "novo calculo (1-sim 2-nao)" << endl;
				 cin >> opc ;
			 }while(opc<1 || opc >2);
				 }
			
			}
	 
	}while(opc!=2);
	
	
	
}

