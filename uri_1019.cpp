#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    while(cin >> x) {
        cout << x/60/60 << ":" << x/60%60 << ":" << x%60 << endl;
    }
}
