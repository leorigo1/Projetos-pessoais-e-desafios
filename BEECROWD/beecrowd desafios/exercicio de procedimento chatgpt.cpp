#include <iostream>
#include <locale>
using namespace std;

void somar(int n1, int n2) {
    int resultado = n1 + n2;
    cout << "Resultado da soma: " << resultado << endl;
}

void subtrair(int n1, int n2) {
    int resultado = n1 - n2;
    cout << "Resultado da Subtração: " << resultado << endl;
}

void multiplicar(int n1, int n2) {
    int resultado = n1 * n2;
    cout << "Resultado da Multiplicação: " << resultado << endl;
}

void dividir(int n1, int n2) {
    if (n2 == 0) {
        cout << "Erro: divisão por zero!" << endl;
    } else {
        int resultado = n1 / n2;
        cout << "Resultado da Divisão: " << resultado << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    int n1, n2;

    cout << "===== CALCULADORA =====" << endl;
    cout << "1. Adição" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "5. Sair" << endl;

    cout << "Escolha uma opção: ";
    cin >> opcao;

    if (opcao == 5) {
        return 0;
    }

    cout << "Digite dois números inteiros: ";
    cin >> n1 >> n2;

    if (opcao == 1) {
        somar(n1, n2);

    } else if (opcao == 2) {
        subtrair(n1, n2);

    } else if (opcao == 3) {
        multiplicar(n1, n2);

    } else if (opcao == 4) {
        dividir(n1, n2);

    } else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}
