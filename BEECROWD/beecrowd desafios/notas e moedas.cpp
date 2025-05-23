#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double valor;
    int resto;
    int N100,N50,N20,N10,N5,N2,N1;
    cin >> valor; //632
    cout << valor << endl;

    ///Notas de 100
    N100 = valor / 100; //N100 vai ser = a 6
    valor = valor % 100; //substitui o 632 por 32

    ///Notas de 50
    N50 = valor / 50;
    valor = valor % 50;

    ///Notas de 20
    N20 = valor / 20;
    valor = valor % 20;

    ///Notas de 10
    N10 = valor / 10;
    valor = valor % 10;

    ///Notas de 5
    N5 = valor / 5;
    valor = valor % 5;

    ///Notas de 2
    N2 = valor / 2;
    valor = valor % 2;

    N1 = valor;

    cout << N100<< " nota(s) de R$ 100,00" << endl;
    cout << N50 << " nota(s) de R$ 50,00" << endl;
    cout << N20 << " nota(s) de R$ 20,00" << endl;
    cout << N10 << " nota(s) de R$ 10,00" << endl;
    cout << N5  << " nota(s) de R$ 5,00" << endl;
    cout << N2  << " nota(s) de R$ 2,00" << endl;
    cout << N1  << " nota(s) de R$ 1,00" << endl;


    int m1, m50, m25, m10, m05, m01;

    m1 = valor / 1;
    valor = valor % 1;

    m50 = valor / 0.5;
    valor = valor % 0.5;

    m25 = valor / 0.25;
    valor = valor % 0.25;

    m10 = valor / 0.10;
    valor = valor % 0.10;

    m05 = valor / 0.05;
    valor = valor % 0.05;

    m01 = valor;

    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m05 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
