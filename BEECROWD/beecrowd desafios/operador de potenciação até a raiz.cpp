#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main () {

double n1, potencia, resultado, raiz;

setlocale(LC_ALL, "");


wcout << "Calcule o valor em pot�ncia e em seguida raiz quadrada" << endl;  // para calcular a potencia��o
wcout << "Digite um n�mero para realizar a opera��o: " << endl;
cin >> n1;
wcout << "Digite o valor da potencia" << endl;
cin >> potencia;
resultado = pow(n1,potencia);
wcout << "A pot�ncia de: " << n1 << " �: " << resultado << endl;


raiz = sqrt(resultado);                                                   //para calcular a raiz quadrada
cout << "A raiz quadrada de: " << resultado << " �: " << raiz << endl;


return 0;
}
