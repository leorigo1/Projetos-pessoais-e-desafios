#include <iostream>
using namespace std;

int main () {
    string n;
    cin >> n;

    int menor = 10; // maior que qualquer d�gito
    int posicao = 0;

    for (int i = 0; i < n.length(); i++) {
        int digito = n[i] - '0'; // Converte caractere para n�mero

        if (digito < menor) {
            menor = digito;
            posicao = i + 1; // posi��o come�a em 1
        }
    }

    cout << "Menor digito: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
