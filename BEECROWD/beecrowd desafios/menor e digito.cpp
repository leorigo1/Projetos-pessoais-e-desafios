#include <iostream>
using namespace std;

int main () {
    string n;
    cin >> n;

    int menor = 10; // maior que qualquer dígito
    int posicao = 0;

    for (int i = 0; i < n.length(); i++) {
        int digito = n[i] - '0'; // Converte caractere para número

        if (digito < menor) {
            menor = digito;
            posicao = i + 1; // posição começa em 1
        }
    }

    cout << "Menor digito: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
