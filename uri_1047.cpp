/*

*/
#include <iostream>

using namespace std;

class tempodejogo
{

	int x1, x2, x3, x4;

public:
	//tempodejogo();
	//tempodejogo();

	void entrada()
	{

		cin >> x1 >> x2 >> x3 >> x4;

	}

	void calculatempo ()
	{

		if (x2 > 60){
			x1 += x2 / 60;
			x2 = x2 % 60;
		}
		
		if (x4 > 60){
			x3 += x4 / 60;
			x4 = x4 % 60;
		}
		
		if (x1 >= 24) x1 = x1 % 24;		
		if (x3 >= 24) x3 = x3 % 24;
		
	   	 x1 = (x3-x1);
	   if (x1<0) x1 += 24;
         x2 = x4-x2;
       if (x2 <0) { x2+=60; x1--; }	
	   	if (x1==0 && x2== 0) x1 =24;	

	}

	void saida ()
	{

		cout << "O JOGO DUROU " << x1 << " HORA(S) E " << x2 << " MINUTO(S)" << endl;

	}


};

int main()
{

	tempodejogo* t = new tempodejogo();
	t->entrada();
	t->calculatempo();
	t->saida();

	return 0;
}
