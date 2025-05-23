#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
int codigo, quantidade;
double resultado;
cin >> codigo >> quantidade;
if (codigo == 1) {
  resultado = 4.00 * quantidade;
}
else if (codigo == 2) {
   resultado = 4.50 * quantidade;
}
else if (codigo == 3) {
   resultado = 5.00 * quantidade;
}
else if (codigo == 4) {
   resultado = 2.00 * quantidade;
}
else if (codigo == 5) {
   resultado = 1.50 * quantidade;
}



cout << fixed << setprecision(2);
cout << "Total: R$ " << resultado << endl;

return 0;
}
