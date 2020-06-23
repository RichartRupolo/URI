#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int x1,x2;
	int y1,y2;
	int dx,dy;
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	do{
		
		
	
		if (x1 > x2){
		 dx = x1 - x2;
		 }
          else dx = x2 - x1;

        if (y1 > y2){
		  dy = y1 - y2;
		}
         else dy = y2 - y1;

        if (x1 == x2 && y1 == y2){
            cout << "0" << endl;
		}
         else if (x1 == x2 || y1 == y2 || dx == dy){
            cout << "1" << endl;
		 }
          else{
             cout << "2" << endl;
		  }
		  
		cin >> x1 >> y1 >> x2 >> y2;
		
	}while( x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);
	
	return 0;
}
