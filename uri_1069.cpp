#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    char e[1001];
    int d, n, c, i;

    cin >> n;
    getchar(); // pra obrigar o cursor ir para a linha de baixo
    while (n--){
        c = 0;
        i = 0;
        gets(e);

        for (d = 0; d < (int) strlen(e); d++){
            if (e[d] == '<'){
                i++;
            } else if (e[d] == '>' && i - 1 >= 0){
                i--;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}

