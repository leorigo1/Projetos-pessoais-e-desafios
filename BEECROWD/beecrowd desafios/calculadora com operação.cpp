#include <iostream>
using namespace std;

int main () {
int n1, n2, soma, operacao;
double resultado;

cout << "Calculadora do Leonardo" <<endl;
cout << "Digite a operacao desejada" << endl;
cout << "  " << endl;
cout << "(1) Soma" <<endl;
cout << "(2) Subtracao" <<endl;
cout << "(3) Multiplicacao" <<endl;
cout << "(4) Divisao" <<endl;
 cin >> operacao;

 cout << "Digite o primeiro valor: " << endl;
  cin >> n1;
  cout << "Digite o segundo valor: " << endl;
  cin >> n2;

   switch(operacao) {
   case 1:
       resultado = n1 + n2;
        cout << "Resultado da soma: " << resultado << endl;
       break;

   case 2:
       resultado = n1 - n2;
      cout << "Resultado da subtracao: " << resultado << endl;
       break;

   case 3:
    resultado = n1 * n2;
     cout << "Resultado da multiplicacao: " << resultado << endl;
       break;

   case 4:
    resultado = n1 / n2;
    cout << "Resultado da Divisao: " << resultado << endl;
      break;

      return 0;
   }









}
