#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main () {
setlocale(LC_ALL,"Portuguese");

double valor, resultado;
int operacao;

cout << "Escolha a convers�o desejada:" << endl;      //escolher a convers�o
cout << "(1) Celsius em Fahrenheit" << endl;
cout << "(2) Fahrenheit em Celsius" << endl;
cout << "(3) Quil�metro em Milhas" << endl;
cout << "(4) Milha em Quil�metros" << endl;
cout << "(5) Kilos em Libras" << endl;
cout << "(6) Libras em Kilos" << endl;
cout << "(0) Sair" << endl;
cin >> operacao;



switch(operacao)  {                                         //convertedor de resultados
    case 1:
resultado = valor * 1.8 + 32;
  cout << "O valor convertido �: " << resultado << endl;
 break;

   case 2:
resultado = (valor - 32) / 1.8;
  cout << resultado << endl;
break;

case 3:
resultado = (valor / 1.6093);
  cout << resultado << endl;
break;

case 4:
resultado = valor * 1.6093;
  cout << resultado << endl;
break;

case 5:
resultado = valor * 2.20462;
  cout << resultado << endl;
break;

case 6:
resultado = valor * 0.453592;
  cout << resultado << endl;
break;

case 0:
  cout << "Pressione qualquer tecla para finalizar o programa" << endl;
break;

 default:                                                    //default signifca que qualquer tecla que n�o esta incluida nas op��es dar� como negativo/inexistente
      cout << "Op��o inv�lida\nReinicie o programa";
      break;


cout << "Digite o valor que ser� convertido: " << endl;         //ler o valor que ser� convertido
cin >> valor;

}
return 0;
}
