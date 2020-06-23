#include <iostream>

using namespace std;

class DDD
{

	int d;


public:

	DDD (int d)
	{
		this-> d = d;
	}

	string verifica()
	{
		string str;
		if(d == 61)
		{
			str = "Brasilia";

		}
		else if(d == 71)
		{
			str = "Salvador";
		}
		else if(d == 11)
		{
			str = "Sao Paulo";
		}
		else if(d == 21)
		{
			str = "Rio de Janeiro";
		}
		else if(d == 32)
		{
			str = "Juiz de Fora";
		}
		else if(d == 19)
		{
			str = "Campinas";
		}
		else if(d == 27)
		{
			str = "Vitoria";
		}
		else if(d == 31)
		{
			str = "Belo Horizonte";
		}
		else
		{
			str = "DDD nao cadastrado";
		}
		return str;
	}


};

int main()
{
	int d;
	cin >>d;
	DDD *ddd = new DDD (d);
	cout <<ddd-> verifica() << endl;

	return 0;
}
