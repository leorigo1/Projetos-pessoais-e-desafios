#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int inicio,fim,duracao;
cin >> inicio >> fim;

if(inicio == fim) {
duracao = 24;
cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
}

if (inicio < fim) {
duracao = fim - inicio;
cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
}

if (inicio > fim) {
duracao = (24 - inicio) + fim;
cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
}
return 0;
}
