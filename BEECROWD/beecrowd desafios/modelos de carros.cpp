#include <iostream>
#include <cmath>
#include <locale>

int main () {
    using namespace std;
  setlocale(LC_ALL, "Portuguese");



int modelo;

cout << "Escreva o modelo de carro que deseja receber informaçôes" << endl;
cout << "(1) Toyota Corolla" << endl;
cout << "(2) Honda Civic" << endl;
cout << "(3) Volskwagen Golf Gti" << endl;
cin >> modelo;


switch (modelo) {
case 1:
cout << "Você escolheu o Toyota Corolla" << endl;
cout << "Cavalaria: 171 cv " << endl;
cout << "Torque: 203 Nm " << endl;
cout << "Peso: 1.405 kg " << endl;
cout << "Preço: R$ 189.990 " <<endl;
break;


case 2:
cout << "Você escolheu o Honda Civic" << endl;
cout << "Cavalaria: 150 cv " << endl;
cout << "Torque: 180 Nm " << endl;
cout << "Peso: 1.300 kg " << endl;
cout << "Preço: 146.738,68 " <<endl;
break;

case 3:
cout << "Você escolheu o Volskwagen Golf GTI" << endl;
cout << "Cavalaria: 265 cv" << endl;
cout << "Torque: 370 Nm" << endl;
cout << "Peso: 1.466 kg" << endl;
cout << "Preço: R$ 350.000,00" << endl;
break;

default:
cout << "Desculpe, essa opção não existe" << endl;
}

return 0;
}
