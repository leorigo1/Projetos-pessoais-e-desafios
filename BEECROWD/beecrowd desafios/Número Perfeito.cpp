#include <iostream>
using namespace std;

int main() {
int testes, valor;
cin >> testes;

for (int i = 1; i <= testes; i++) {
cin >> valor;
int soma = 0;

for (int d = 1; d < valor; d++) {
    if (valor % d == 0) {
    soma += d;
}
}

if (soma == valor) {
cout << valor << " eh perfeito" << endl;
} else {
cout << valor << " nao eh perfeito" << endl;
}
}
return 0;
}
