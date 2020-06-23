#include <cstdio>
#include <iostream>

using namespace std;

void max(int &a, int &b){
    int temp;
    if( b > a){
        temp = b;
        b = a;
        a = temp;
    }
}


int main()
{
    int l , c, r1, r2, r, coef;
    bool cabe;
    while( cin >> l >> c >> r1 >> r2  > 0 ){
        if( !(l||c||r1||r2) ) break;
        r = r1 + r2;
        max(l,c);
        max(r1,r2);
        coef = (l-r)*(l-r) + (c-r)*(c-r);
        cabe = (c >= 2*r1) && ( coef >= r*r );
        if(cabe)
            cout << "S" << endl;
        else
            cout <<"N"<< endl;
    }
}

