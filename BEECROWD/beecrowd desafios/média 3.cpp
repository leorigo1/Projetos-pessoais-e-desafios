#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
double n1,n2,n3,n4, soma1, soma2, notadoexame;
cin >> n1 >> n2 >> n3 >> n4;
cout << fixed << setprecision(1);

soma1 = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
cout << "Media: " << soma1 << endl;

if (soma1 >= 7.0){
cout << "Aluno aprovado." << endl;
return 0;
}

else if (soma1 <= 5.0){
cout << "Aluno reprovado." << endl;
return 0;
}

if (soma1 > 5.0 && soma1 < 6.9){
cout << "Aluno em exame." << endl;
cin >> notadoexame;
soma2 = (notadoexame + soma1) /2;
cout << "Nota do exame: " << notadoexame << endl;
}

if (soma2 > 5.0){
cout << "Aluno aprovado." << endl;
cout << "Media final: " << soma2 << endl;
}

if (soma2 < 5.0){
cout << "Aluno reprovado." << endl;
cout << "Media final: " << soma2 << endl;
return 0;
}
return 0;
}
