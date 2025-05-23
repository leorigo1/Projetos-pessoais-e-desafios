#include <iostream>
#include <cmath>
using namespace std;
int main () {

int i,valor;
int par = 0, impar = 0, positivo = 0, negativo = 0;


for (i=0; i<5; i++){
 cin >> valor;

if (valor > 0) {
    positivo++;
}

if (valor < 0) {
    negativo++;
    }

if (valor % 2 == 0) {
    par++;
    }

if (valor % 2 != 0) {
    impar++;
    }

}
cout << par << " valor(es) par(es)" << endl;
cout << impar << " valor(es) impar(es)" << endl;
cout << positivo << " valor(es) positivo(s)" << endl;
cout << negativo << " valor(es) negativo(s)" << endl;

return 0;
}
