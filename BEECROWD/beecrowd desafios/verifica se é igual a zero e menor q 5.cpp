#include <iostream>
#include <limits>
#include <locale>        //Para utilizar o valor m�nimo e m�ximo de int
using namespace std;

int main () {
setlocale(LC_ALL, "Portuguese");

int numero, soma = 0;
double media;

cout << "Calculadora de m�dias" << endl;
cout << "Digite as suas 5 notas desse semestre" << endl;


 for (int i = 0; i < 5; i++) {
cout << "Notas: ";
cin >> numero;

  soma += numero;

  media = numero/5;

  cout << "A sua m�dia total � de: " << media << endl;
        }
}
