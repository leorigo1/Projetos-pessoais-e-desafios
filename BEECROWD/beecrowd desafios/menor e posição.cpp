#include <iostream>
using namespace std;
int main () {

int valor, digito = 1000;
cin >> valor;
int pos = 0;
for (int i=1; i<=valor; i++) {
        int numero;
        cin >> numero;
if(  numero < digito) {
    digito = numero;
    pos = i - 1;
}

}
cout << "Menor valor: " << digito << endl;
cout << "Posicao: " << pos << endl;
return 0;
}
