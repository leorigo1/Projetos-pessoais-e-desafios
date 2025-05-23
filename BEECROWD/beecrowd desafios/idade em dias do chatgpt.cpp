#include <iostream>
using namespace std;

int main() {
    int valor;
    int ano, mes, dia;

    cin >> valor;

    // Cálculo dos anos
    ano = valor / 365;
    valor = valor % 365;

    // Cálculo dos meses
    mes = valor / 30;
    valor = valor % 30;

    // O que sobra são os dias
    dia = valor;

    // Saída correta
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}
