#include <iostream>

using namespace std;

int main()
{
	int x;
	do{
		cin >> x;
		if(x!=2002){
			cout << "Senha Invalida" << endl;
			}else{
				cout << "Acesso Permitido" << endl;
				}
		
		}while(x!=2002);
	return 0;
}
