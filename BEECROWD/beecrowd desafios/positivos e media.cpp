#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
double valores, soma;
int contador = 0 , i;
cout << fixed << setprecision(1);


for (i = 0; i < 6; i++) {
cin >> valores;

if (valores > 0) {
soma += valores;
contador++;
}
}
cout << contador << " valores positivos" << endl;

if (contador > 0) {
    cout << (soma / contador) << endl;
}



    return 0;
}
