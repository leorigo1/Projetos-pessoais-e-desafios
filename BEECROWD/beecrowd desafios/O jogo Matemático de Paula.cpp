#include <iostream>
#include <cctype>
using namespace std;

int main () {
    int quant;
    cin >> quant;
    string entrada;

    for(int i = 1; i <= quant; i++) {
        cin >> entrada;

int v1 = entrada[0] - '0';
char letra = entrada[1];
int v2 = entrada[2] - '0';

int resultado;

if (v1 == v2) {
    resultado = v1 * v2;
} else if (isupper(letra)) {
    resultado = v2 - v1;
} else {
    resultado = v1 + v2;
}
cout << resultado << endl;
}
return 0;
}
