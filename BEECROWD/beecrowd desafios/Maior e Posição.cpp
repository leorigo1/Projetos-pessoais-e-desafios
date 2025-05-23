#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

int valor, i, resultado, maior = 0, contador = 0;
for (i = 1; i <= 100; i++) {
cin >> valor;
if (i == 1 || valor > maior) { // Atualiza se for maior
            maior = valor;
contador = i;
}
}
cout << maior << endl;
cout << contador << endl;
return 0;

}
