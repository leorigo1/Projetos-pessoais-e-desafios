#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;
int main() {
cout << fixed << setprecision(2);
setlocale(LC_ALL,"Portuguese");
int i;
double vetor[7], maior, menor;

cout << "Digite os valores diários de chuva durante a semana" << endl;
for (i=0; i<7; i++){
cin >> vetor[i];
}
maior = max(vetor[i], maior);
menor = min(vetor[i], maior);


for (i=0; i<7; i++){
cout << "\nValores: " << endl;
cout << maior << endl;
cout << menor << endl;
}
return 0;
}
