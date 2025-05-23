#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main () {
setlocale(LC_ALL,"");
double n1, n2, resultado;

cout << "Calculadora de média do aluno" << endl;
cout << "Digite o valor 1: " <<endl;
cin >> n1;
cout << "Digite o valor 2: " <<endl;
cin >> n2;
resultado = (n1 + n2)/2;
cout << "A média do aluno somando os valores: " << n1 << " + " << n2 << " dá o resultado de: " << resultado << endl;

return 0;
}
