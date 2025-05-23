#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
int valor;
int horas,minutos,segundos;
cin >> valor;

//horas
horas = valor /3600;
valor = valor % 3600;
//minutos
minutos = valor /60;
valor = valor % 60;
//segundos
segundos = valor /1;
valor = valor % 1;

cout << horas << ":" << minutos << ":" << segundos << endl;
}
