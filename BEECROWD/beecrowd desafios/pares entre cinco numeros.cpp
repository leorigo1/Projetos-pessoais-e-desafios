#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
int valores;
int contador = 0;
for (int i=0; i <=4; i++) {
    cin >> valores;

if (valores % 2 == 0) {
        contador++;
}
}
   cout << contador << " valores pares" << endl;
return 0;
}
