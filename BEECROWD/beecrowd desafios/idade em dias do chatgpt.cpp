#include <iostream>
using namespace std;

int main() {
    int valor;
    int ano, mes, dia;

    cin >> valor;

    // C�lculo dos anos
    ano = valor / 365;
    valor = valor % 365;

    // C�lculo dos meses
    mes = valor / 30;
    valor = valor % 30;

    // O que sobra s�o os dias
    dia = valor;

    // Sa�da correta
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}
