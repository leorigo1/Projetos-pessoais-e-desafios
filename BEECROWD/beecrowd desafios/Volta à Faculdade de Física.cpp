#include <iostream>
using namespace std;
int main () {

int v,t;
cin >> v >> t;

 if (v < -100 || v > 100 || t < 0 || t > 200) {
        return 1;
    }

v = v*2;
int resultado = t * v;

cout << resultado << endl;

return 0;
}
