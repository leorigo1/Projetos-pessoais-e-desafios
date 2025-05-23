#include <iostream>
using namespace std;

int main() {
int valor;
int ano, mes, dia;

cin >> valor;

//ano
ano = valor / 365;
valor = valor % 365;

//mes
mes = valor / 30;
valor = valor % 30;

//dia
dia = valor;

cout << ano << " ano(s)" << endl;
cout << mes << " mes(es)" << endl;
cout << dia << " dia(s)" << endl;
return 0;
}
