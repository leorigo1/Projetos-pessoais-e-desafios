#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main () {

double n1, potencia, resultado, raiz;

setlocale(LC_ALL, "");


wcout << "Calcule o valor em potência e em seguida raiz quadrada" << endl;  // para calcular a potenciação
wcout << "Digite um número para realizar a operação: " << endl;
cin >> n1;
wcout << "Digite o valor da potencia" << endl;
cin >> potencia;
resultado = pow(n1,potencia);
wcout << "A potência de: " << n1 << " É: " << resultado << endl;


raiz = sqrt(resultado);                                                   //para calcular a raiz quadrada
cout << "A raiz quadrada de: " << resultado << " É: " << raiz << endl;


return 0;
}
