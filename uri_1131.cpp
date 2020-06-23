#include <iostream>

using namespace std;

int main()
{
	int a, b, c=1,inter=0,gremio=0,empate = 0;
	
	while(c==1){
		
		cin >> a >> b;
	    cout << "Novo grenal (1-sim 2-nao)" << endl ;
	    cin >> c;
	    if(a>b){
			
			inter ++;
			
			}
			if(b>a){
				
				gremio++;
				
				}
				
				if(b==a){
					
					empate++;
					
					}
		}
		
		cout << inter+gremio+empate << " grenais" << endl;
		cout << "Inter:"<< inter << endl;
		cout <<"Gremio:"<< gremio << endl;
		cout << "Empates:"<<empate << endl;
		if(inter==gremio){
			cout << "Nao houve vencedor" << endl;
			}
			if(inter>gremio){
			cout << "Inter venceu mais" << endl;
			}
			if(inter<gremio){
			cout << "Gremio venceu mais" << endl;
			}
	return 0;
}

