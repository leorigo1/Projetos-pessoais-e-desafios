#include <iostream>
#include <locale>
using namespace std;

void somar(int n1, int n2) {
    int resultado = n1 + n2;
    cout << "Resultado da soma: " << resultado << endl;
}

void subtrair(int n1, int n2) {
    int resultado = n1 - n2;
    cout << "Resultado da Subtra��o: " << resultado << endl;
}

void multiplicar(int n1, int n2) {
    int resultado = n1 * n2;
    cout << "Resultado da Multiplica��o: " << resultado << endl;
}

void dividir(int n1, int n2) {
    if (n2 == 0) {
        cout << "Erro: divis�o por zero!" << endl;
    } else {
        int resultado = n1 / n2;
        cout << "Resultado da Divis�o: " << resultado << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    int n1, n2;

    cout << "===== CALCULADORA =====" << endl;
    cout << "1. Adi��o" << endl;
    cout << "2. Subtra��o" << endl;
    cout << "3. Multiplica��o" << endl;
    cout << "4. Divis�o" << endl;
    cout << "5. Sair" << endl;

    cout << "Escolha uma op��o: ";
    cin >> opcao;

    if (opcao == 5) {
        return 0;
    }

    cout << "Digite dois n�meros inteiros: ";
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
        cout << "Op��o inv�lida!" << endl;
    }

    return 0;
}
