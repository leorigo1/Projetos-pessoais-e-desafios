#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double valor;
cin >> valor;
if (valor >=0 && valor <=25.00) {
 cout << "Intervalo [0,25]" << endl;
}

if (valor >=25.01 && valor <=50.00) {
 cout << "Intervalo [25,50]" << endl;
}

if (valor >50 && valor <=75.00) {
 cout << "Intervalo [50,75]" << endl;
}

if (valor >75 && valor <=100.00) {
 cout << "Intervalo [75,100]" << endl;
}
else (valor >=0 || valor >=100.01); {
cout << "Fora de intervalo" << endl;
}

return 0;
}
