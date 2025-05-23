#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
double a,b,c;
double maior,menor,meio,maiorelevado;
cin >> a >> b >> c;
maior= max(a, max(b, c));
menor= min(a, min(b, c));
meio= (a + b + c) - menor - maior;
maiorelevado = pow(maior,2);

if (maior >= meio + menor) { //1
cout << "NAO FORMA TRIANGULO" << endl;
return 0;
}

if (maiorelevado == pow(meio,2) + pow(menor,2)) { //2
cout << "TRIANGULO RETANGULO" << endl;
}

if (maiorelevado > pow(meio,2) + pow(menor,2)) { //3
cout << "TRIANGULO OBTUSANGULO" << endl;
}

if (maiorelevado < pow(meio,2) + pow(menor,2)) { //4
cout << "TRIANGULO ACUTANGULO" << endl;
}

if (maior == menor && meio && maior == meio && meio == menor) { //5
cout << "TRIANGULO EQUILATERO" << endl;
return 0;
}

if (maior == menor && maior == meio) { //6
cout << "TRIANGULO ISOSCELES" << endl;
}

else if (meio == menor && meio == maior) { //7
cout << "TRIANGULO ISOSCELES" << endl;
}

else if(menor == maior && menor == meio) { //8
cout << "TRIANGULO ISOSCELES" << endl;
}
return 0;
}
