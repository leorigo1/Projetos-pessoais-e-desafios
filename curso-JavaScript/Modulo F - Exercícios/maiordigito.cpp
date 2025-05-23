#include <iostream>
using namespace std;

int main() {
    int numero, maiorDigito = 0;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    while (numero > 0) {
        int digito = numero % 10;
        if (digito > maiorDigito) {
            maiorDigito = digito;
        }
    numero /= 10;
    }
    cout << maiorDigito << endl;

    return 0;
}
