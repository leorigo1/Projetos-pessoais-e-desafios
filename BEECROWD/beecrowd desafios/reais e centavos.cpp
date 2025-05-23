#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double valor,valoremcentavos,valoremreais,centavos;

cin >> valor;

valoremcentavos = valor * 100;
valoremreais = valoremcentavos / 100;
centavos = int(valoremcentavos) % 100;

cout << fixed << setprecision(0);
cout << int(valoremreais) << " reais e "<< centavos << " centavos" << endl;

return 0;
}
